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
include tests/CMakeFiles/check_StratAirliftInit.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/check_StratAirliftInit.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/check_StratAirliftInit.dir/flags.make

tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o: tests/CMakeFiles/check_StratAirliftInit.dir/flags.make
tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o: ../tests/src/check_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o"
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o   -c /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c

tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.i"
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c > CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.i

tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.s"
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /root/CLionProjects/C/GroupB_StratAirlift/tests/src/check_main.c -o CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.s

# Object files for target check_StratAirliftInit
check_StratAirliftInit_OBJECTS = \
"CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o"

# External object files for target check_StratAirliftInit
check_StratAirliftInit_EXTERNAL_OBJECTS =

../build/check_StratAirliftInit: tests/CMakeFiles/check_StratAirliftInit.dir/src/check_main.c.o
../build/check_StratAirliftInit: tests/CMakeFiles/check_StratAirliftInit.dir/build.make
../build/check_StratAirliftInit: ../build/libStratAirlift.so
../build/check_StratAirliftInit: tests/CMakeFiles/check_StratAirliftInit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ../../build/check_StratAirliftInit"
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/check_StratAirliftInit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/check_StratAirliftInit.dir/build: ../build/check_StratAirliftInit

.PHONY : tests/CMakeFiles/check_StratAirliftInit.dir/build

tests/CMakeFiles/check_StratAirliftInit.dir/clean:
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests && $(CMAKE_COMMAND) -P CMakeFiles/check_StratAirliftInit.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/check_StratAirliftInit.dir/clean

tests/CMakeFiles/check_StratAirliftInit.dir/depend:
	cd /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /root/CLionProjects/C/GroupB_StratAirlift /root/CLionProjects/C/GroupB_StratAirlift/tests /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests /root/CLionProjects/C/GroupB_StratAirlift/cmake-build-debug/tests/CMakeFiles/check_StratAirliftInit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/check_StratAirliftInit.dir/depend

