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

# Include any dependencies generated for this target.
include CMakeFiles/test_StratAirliftInit.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_StratAirliftInit.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_StratAirliftInit.dir/flags.make

CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o: CMakeFiles/test_StratAirliftInit.dir/flags.make
CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o: ../tests/src/check_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o   -c /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c

CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c > CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.i

CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c -o CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.s

# Object files for target test_StratAirliftInit
test_StratAirliftInit_OBJECTS = \
"CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o"

# External object files for target test_StratAirliftInit
test_StratAirliftInit_EXTERNAL_OBJECTS =

../build/libtest_StratAirliftInit.so: CMakeFiles/test_StratAirliftInit.dir/tests/src/check_main.c.o
../build/libtest_StratAirliftInit.so: CMakeFiles/test_StratAirliftInit.dir/build.make
../build/libtest_StratAirliftInit.so: CMakeFiles/test_StratAirliftInit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C shared library ../build/libtest_StratAirliftInit.so"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_StratAirliftInit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_StratAirliftInit.dir/build: ../build/libtest_StratAirliftInit.so

.PHONY : CMakeFiles/test_StratAirliftInit.dir/build

CMakeFiles/test_StratAirliftInit.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_StratAirliftInit.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_StratAirliftInit.dir/clean

CMakeFiles/test_StratAirliftInit.dir/depend:
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/C/GroupB_StratAirlift /root/CLionProjects/C/GroupB_StratAirlift /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles/test_StratAirliftInit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/test_StratAirliftInit.dir/depend
