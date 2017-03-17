FIDO
==

Fido is a minimalistic, IDE agnostic, C/C++ project generator supporting various toolchains 
and build systems.

Installation
==

    python setup.py build
    sudo python setup.py install

Usage
==

    Usage: fido <action> [template] (path)

    Available actions:

                       help : Print the usage menu.
                     create : Create a project with the specified template, requires a template and a path.
                        add : Add one or multiple files to the proper folders by their extensions.
                      build : Build the current project.
                      clean : Clean built files for the current project.
                    rebuild : Clean + Build.
                      reset : Available only for certain templates, remote every build generated file.

    Available templates:

             android-make-c : Create a native Android C project based on Makefile.
           android-make-cpp : Create a native Android C++ project based on Makefile.
        android-ndk-build-c : Create a native Android C project based on the ndk-build utility.
                    cmake-c : Create a C project based on CMake.
                  cmake-cpp : Create a C++ project based on CMake.
                     make-c : Create a C project based on Makefile.
                   make-cpp : Create a C++ project based on Makefile.
		     rospkg : Create a simple ros package.


Example
==

	$ fido create make-c sample-project

	Creating project 'sample-project' with template 'make-c' ...

	$ cd sample-project
	$ fido add io.h io.c networking.h networking.c

	Creating 'include/io.h' ...
	Creating 'src/io.c' ...
	Creating 'include/networking.h' ...
	Creating 'src/networking.c' ...

	$ fido build
	Building ...

	$ ./sample-project

	Hello World from sample-project !
ROS Example 
==
       $ fido create rospkg simple_node
       
       Creating project 'simple_node' with template 'rospkg' ...
       
The `rospkg` template follows the ros package folder structure convention. It uses the sweet [Package Manifest Format Two](http://www.ros.org/reps/rep-0140.html) template for package.xml file, which avoids the ros package dependecies declaration redundancy. 
```    	
	simple_node
	├── CMakeLists.txt
	├── include
	│   └── simple_node
	├── package.xml
	└── src
	    └── main.cpp
```

Video Example
==

[![asciicast](https://asciinema.org/a/8te8gnp36ii7iypj2j1eg5b6m.png)](https://asciinema.org/a/8te8gnp36ii7iypj2j1eg5b6m)

License
==

This project is copyleft of [Simone Margaritelli](http://www.evilsocket.net/) and released under the GPL 3 license.
