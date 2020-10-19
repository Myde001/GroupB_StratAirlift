cmake_minimum_required(VERSION 3.12)
project(GroupB_StratAirlift C)

set(CMAKE_C_STANDARD 99)

set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_BINARY_DIR ${CMAKE_CURRENT_SOURCE_DIR}/build)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} "${CMAKE_SOURCE_DIR}/CMakeModules/")



###############################################################################
# Set build features
set(CMAKE_BUILD_TYPE Debug)

###############################################################################
include(CheckCSourceCompiles)
include(CheckCSourceRuns)
include(CheckFunctionExists)
include(CheckIncludeFile)
include(CheckIncludeFiles)
include(CheckLibraryExists)
include(CheckSymbolExists)
include(CheckTypeSize)

###############################################################################

#find_package(Check REQUIRED)
#
#include_directories(${CHECK_INCLUDE_DIRS})
#include_directories(include ${CHECK_INCLUDE_DIR})

add_subdirectory(src)
add_subdirectory(tests)

###############################################################################

# Unit tests
enable_testing()
add_test(NAME check_StratAirliftInit COMMAND check_StratAirliftInit)

add_library(StratAirlift SHARED
        src/calc_shortest_path.c
        src/common_functions.c
        src/find_closest.c
        src/gen_locations.c
        src/main.c
        src/parse_airports.c
        src/parse_config.c
	src/export.c

)

add_library(test_StratAirliftInit SHARED
    tests/src/check_main.c
)


target_link_libraries(test_StratAirliftInit ${GTK_LIBRARIES})
add_definitions(${GTK_CFLAGS} ${GTK_CFLAGS_OTHER})



