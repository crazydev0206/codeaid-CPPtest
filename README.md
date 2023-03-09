# Geometric Shapes

## Prerequisites

* C++ compiler supporting C++17 standard
* CMake 3.18 or newer

## Building the Project

You can build the project in pretty much the same way as any other CMake-based project. Just open the project directory in any IDE supporting CMake, e.g., Visual Studio 2019+, CLion or Qt Creator, and build the project following the official instructions. Alternatively, you can build the project from the command line by running the following commands in the project directory:

```
mkdir build && cd build
cmake -DCMAKE_BUILD_TYPE=Debug ..
cmake --build .
```

## Running the Project

In order to help you test your work, we have provided a source code of simple command-line application under the `tests` folder.  You should check it to understand how automatic tests are being executed.
You are also encouraged to modify the testing code and write your own tests. Any change made to the code in `GeometricShapesApp` project will not influence the final score.
