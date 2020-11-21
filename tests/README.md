**Install check:**

Check uses autotools as a build system, and the default steps work on GNU/Linux systems. After the latest Check source has been downloaded and unpacked, open a terminal in the unpacked directory, then:

`$ ./configure`

`$ make`

`$ make check`

`$ make install`

`$ sudo ldconfig`


**In your project directory**
 
 `$ autoreconf --install`	

`$ ./configure`

`$ make`

`$ make check`

**Create the CMake Build System for the project and then build ‘main’ and ‘libmain.la’ as follows for Unix-compatible systems:**
 	

`$ cmake .
`

`$ make
`

`make test`

**For test coverage**

`sudo apt-get install gcovr`

`gcovr -r . --html -o coverage.html`