**Install check:**

Check uses autotools as a build system, and the default steps work on GNU/Linux systems. To install check  go to [check](https://github.com/libcheck/check) and clone the repository. After the latest Check source has been downloaded and unpacked, open a terminal in the unpacked directory, then:

`$ ./configure`

`$ make`

`$ make check`


`$ make install`

`$ sudo ldconfig`

# Getting the IDE ready (VSCode)


1. The first useful extension we are gonna need is called C/C++, this extension will help us with the Intellisense like code completion, parameter info, quick info, etc. 
Open VSC, go to Code > Preferences > Extensions (also using the shortcut shift + cmd + X) type C++ and press install.

2. The next extension is to actually compile and run our code is called "Code Runner". 
3. We would have to configure our code result to display on terminal considering that the output tab in VSCode is read-only, preventing us from interacting with it if we require input.
    a. Go to the menu Code > Preferences > Settings.
    b. In the User tab on the left panel, expand the Extensions section.
    c. Find and select Run Code Configuration.
    d. Find and check the box Run in Terminal.

4. Install CMake Tools extension for VS Code. Meanwhile, ensure that Cmake and gcc are installed on your system.
 PS: I recommend going through this VS Code guide on setting up a cmake project https://code.visualstudio.com/docs/cpp/cmake-linux

**For test coverage**

`sudo apt-get install gcovr`

Unfortunately in VSCode CodeCoverage via cmakelist is greyed out 

check link for more info "https://developercommunity.visualstudio.com/content/problem/208774/measuring-code-coverage-is-disabled-if-a-cmakelist.html"

This might prevent code from building hence to fix that, comment out this section in tests/CMakeLists.txt

`# testing coverage`

`if(CMAKE_COMPILER_IS_GNUCC)`

`LIST(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake_modules")`

`include(CodeCoverage)`
`APPEND_COVERAGE_COMPILER_FLAGS()`
`#set(COVERAGE_LCOV_EXCLUDES 'dir1/*' 'dir2/*') // this is optional if you want to exclude some directory from the report`

`SETUP_TARGET_FOR_COVERAGE_LCOV(NAME coverage EXECUTABLE  check_StratAirliftInit  DEPENDENCIES check_StratAirliftInit)`

`endif()`


An alternative way is to try 

`gcovr -r . --html -o coverage.html`
