# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.5107.50/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /root/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/182.5107.50/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /root/CLionProjects/C/GroupB_StratAirlift

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug

# Utility rule file for coverage_tests.

# Include the progress variables for this target.
include tests/CMakeFiles/coverage_tests.dir/progress.make

tests/CMakeFiles/coverage_tests: ../build/check_StratAirliftInit
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Resetting code coverage counters to zero."
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Processing code coverage counters and generating report."
	/usr/bin/lcov --gcov-tool /usr/bin/gcov -directory . -b /root/CLionProjects/C/GroupB_StratAirlift --zerocounters
	/usr/bin/lcov --gcov-tool /usr/bin/gcov -c -i -d . -b /root/CLionProjects/C/GroupB_StratAirlift -o coverage_tests.base
	/root/CLionProjects/C/GroupB_StratAirlift/build/check_StratAirliftInit
	/usr/bin/lcov --gcov-tool /usr/bin/gcov --directory . -b /root/CLionProjects/C/GroupB_StratAirlift --capture --output-file coverage_tests.capture
	/usr/bin/lcov --gcov-tool /usr/bin/gcov -a coverage_tests.base -a coverage_tests.capture --output-file coverage_tests.total
	/usr/bin/lcov --gcov-tool /usr/bin/gcov --remove coverage_tests.total --output-file coverage_tests.info
	/usr/bin/genhtml --demangle-cpp -o coverage_tests coverage_tests.info

coverage_tests: tests/CMakeFiles/coverage_tests
coverage_tests: tests/CMakeFiles/coverage_tests.dir/build.make
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Lcov code coverage info report saved in coverage_tests.info."
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Open ./coverage_tests/index.html in your browser to view the coverage report."
.PHONY : coverage_tests

# Rule to build all files generated by this target.
tests/CMakeFiles/coverage_tests.dir/build: coverage_tests

.PHONY : tests/CMakeFiles/coverage_tests.dir/build

tests/CMakeFiles/coverage_tests.dir/clean:
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && $(CMAKE_COMMAND) -P CMakeFiles/coverage_tests.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/coverage_tests.dir/clean

tests/CMakeFiles/coverage_tests.dir/depend:
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/C/GroupB_StratAirlift /root/CLionProjects/C/GroupB_StratAirlift/tests /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests/CMakeFiles/coverage_tests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/coverage_tests.dir/depend

