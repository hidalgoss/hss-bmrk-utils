<p align="right">
  <img width="25%" height="25%"src="./imgs/hidalgoss.png">
</p>

# Project Overview

Custom cross-platorm hss benchmark utils project.

Cmake friendly adding to Qt.


# Build Instructions

## Unix

In Unix systems, STATIC or SHARED library can be built with no issues. 


## Windows

In Windows platforms, if SHARED lib is built, project build will fail depending of the used kit (MinGW , MSVC) bacause symbol exporting is not performed by default as in Unix systems compilers.

If Qt MinGW is used in Windows platform, no issues will be found. 

But if Qt MSVC kit is used, dll genration will fail. The CMake must use below directives in parent project if SHARED lib must be built:

*set(CMAKE_WINDOWS_EXPORT_ALL_SYMBOLS ON)* 
*set(CMAKE_AUTOMOC ON)* 
*find_package(Qt6 REQUIRED COMPONENTS Core)*

*NOTE*  For Qt Designer Custom Plugin creation, MSVC kit seems mandatory to be used. If not, Qt Designer Custom Plugin could not be added to tools tree. By this reason seems needed the complexity to use MSVC kit and not the MinGW one.



# Installation Instructions

CMake GNUInstallDirs must be used in parent CMakeList project so install destinations can be normalized using related CMake path variables: 

*CMAKE_INSTALL_LIBDIR*
*CMAKE_INSTALL_INCLUDEDIR*
*etc...*

If not a parent project used to link this library, this CMake path variables must be set to a valid include and lib destinations in which to install both header and library files.

To be able to install library in designated paths, install step must be added to Qt build steps. 



## System dependencies

* Tested in Qt Creator 10.0.0 based on Qt 6.4.2 for Windows 10


### Dependencies installed 

Any external dependency installed.


## System requirements

## Unix

Pending...


### Windows

Pending...



# License

&copy; Copyright 2020-2023, Hidalgoss Technologies, all rights reserved. Licensed under the terms in [LICENSE](./LICENSE)

This software and documentation are Copyright 2020-2023, Hidalgoss Technologies
Limited and its licensees. All rights reserved. See [license file](./LICENSE) for full copyright notice and license terms.

# Contact

<https://www.hidalgoss.com>

ingenieria@hidalgoss.com

hidalgoss@hotmail.es

