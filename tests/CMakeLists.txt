include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../src)

# If pkg-config is not installed on the system, then the
# CHECK_INSTALL_DIR variable must be set to the install
# location of Check. For example, on Windows, this may
# be: C:/Program Files/check
# set(CHECK_INSTALL_DIR "C:/Program Files/check")

find_package(Check REQUIRED)
find_package(Threads REQUIRED)
include_directories(${CHECK_INCLUDE_DIRS})
link_directories(${CHECK_LIBRARY_DIRS})

set(TEST_SOURCES
        src/check_main.c
)

add_executable(check_StratAirliftInit ${TEST_SOURCES})
target_link_libraries(check_StratAirliftInit StratAirlift ${CHECK_LIBRARIES} ${CMAKE_THREAD_LIBS_INIT})


################################################################################
# testing coverage

if(CMAKE_COMPILER_IS_GNUCC)
LIST(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules")
include(CodeCoverage)
APPEND_COVERAGE_COMPILER_FLAGS()
#set(COVERAGE_LCOV_EXCLUDES 'dir1/*' 'dir2/*') // this is optional if you want to exclude some directory from the report
SETUP_TARGET_FOR_COVERAGE_LCOV(NAME coverage
                              EXECUTABLE  check_StratAirliftInit
                              DEPENDENCIES check_StratAirliftInit)

endif()