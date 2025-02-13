Project Title

This project is a C++ application that utilizes the Raylib library. The Makefile is used to manage the build process for the project.

Build Instructions

Prerequisites
Ensure that the following are installed on your system:

C++ Compiler: g++
Raylib: A library for game development.
You also need the following MacOS frameworks:

OpenGL
Cocoa
IOKit
CoreFoundation
Source Files
The project consists of the following C++ source files:

main.cpp
ball.cpp
paddle.cpp
cpuPaddle.cpp
color.cpp
Targets
The Makefile defines the following targets:

all (default): Builds the executable.
make
This will compile all the source files and create an executable named run.
clean: Removes the generated executable and any intermediate files.
make clean
Compiler Flags

C++ Standard: -std=c++17
Include Path: /opt/homebrew/opt/raylib/include
Library Path: /opt/homebrew/opt/raylib/lib
Linked Libraries: -lraylib and various MacOS frameworks.
Running the Application

Once the build is complete, you can run the application using:

./run
Clean Up

To clean the build environment, use:

make clean
