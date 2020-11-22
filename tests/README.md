**Install check:**

Check uses autotools as a build system, and the default steps work on GNU/Linux systems. After the latest Check source has been downloaded and unpacked, open a terminal in the unpacked directory, then:

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

`gcovr -r . --html -o coverage.html`
