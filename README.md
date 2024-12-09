# CPP: A Mandelbrot Generator

A C++ mandelbrot generator with zoom functionality in opencv. Left click to zoom in, right click to zoom out.

<img src="img/mandel.png"/>

## Dependencies for Running Locally
* cmake >= 2.8
  * All OSes: [click here for installation instructions](https://cmake.org/install/)
* make >= 4.1 (Linux, Mac), 3.81 (Windows)
  * Linux: make is installed by default on most Linux distros
  * Mac: [install Xcode command line tools to get make](https://developer.apple.com/xcode/features/)
  * Windows: [Click here for installation instructions](http://gnuwin32.sourceforge.net/packages/make.htm)
* OpenCV >= 4.1
  * The OpenCV 4.1.0 source code can be found [here](https://github.com/opencv/opencv/tree/4.1.0)
* gcc/g++ >= 5.4
  * Linux: gcc / g++ is installed by default on most Linux distros
  * Mac: same deal as make - [install Xcode command line tools](https://developer.apple.com/xcode/features/)
  * Windows: recommend using [MinGW](http://www.mingw.org/)

## Basic Build Instructions

1. Clone this repo.
2. `sudo apt install libopencv-dev`
3. Make a build directory in the top level directory: `mkdir build && cd build`
4. Compile: `cmake .. && make`
5. Run it: `./Mandlebrot`.


## Rubic

### Readme

| Criteria  | Specification | Evidence  |
| ------------- | ------------- | ------------- |
| A README with instructions is included with the project  | The README is included with the project and has instructions for building/running the project. The README indicates which rubric points are addressed. The README also indicates where in the code (i.e. files and line numbers) that the rubric points are addressed. | README.md |

### Loops, Functions, I/O

| Criteria  | Specification | Evidence  |
| ------------- | ------------- | ------------- |
| Demonstrates an understanding of C++ functions and control structures.  | A variety of control structures are used in the project. The project code is clearly organized into functions.  | mandel.cpp; ln: 27-40 |
| Reads data from a file and process the data, or the program writes data to a file. | Reads data from an external file or writes data to a file as part of the necessary operation of the program.  | mandel.cpp; ln: 42 |
| Accepts user input and processes the input.  | The project accepts input from a user as part of the necessary operation of the program.  | Zoom.cpp; ln: 47-50 |

### Object Oriented Programming

| Criteria  | Specification | Evidence  |
| ------------- | ------------- | ------------- |
| Uses Object Oriented Programming techniques.  | The project code is organized into classes with class attributes to hold the data, and class methods to perform tasks.  | Zoom.h, mandel.h |
| Class constructors utilize member initialization lists.  | All class members that are set to argument values are initialized through member initialization lists.  | mandel.cpp; ln: 8-9 |
| Classes abstract implementation details from their interfaces.  | All class member functions document their effects, either through function names, comments, or formal documentation.  | mandel.h; ln: 20-23 |
| Classes encapsulate behavior.  | Appropriate data and functions are grouped into classes. Member data that is subject to an invariant is hidden from the user. State is accessed via member functions.  | mandel.h, Zoom.h |
| Classes follow an appropriate inheritance hierarchy.  | Inheritance hierarchies are logical. Composition is used instead of inheritance when appropriate. Abstract classes are composed of pure virtual functions. Override functions are specified.  |  |
| Overloaded functions allow the same function to operate on different parameters.  | One function is overloaded with different signatures for the same function name.  |  |
| Derived class functions override virtual base class functions.  | One member function in an inherited class overrides a virtual base class member function.  |  |
| Templates generalize functions in the project.  | One function is declared with a template that allows it to accept a generic parameter. |  |

### Memory Management

| Criteria  | Specification | Evidence  |
| ------------- | ------------- | ------------- |
| Makes use of references in function declarations.  | At least two variables are defined as references, or two functions use pass-by-reference in the project code. | mandel.cpp; ln: 46 |
| The project uses destructors appropriately.  | At least one class that uses unmanaged dynamically allocated memory, along with any class that otherwise needs to modify state upon the termination of an object, uses a destructor.  |  |
| The project uses scope / Resource Acquisition Is Initialization (RAII) where appropriate.  | The project follows the Resource Acquisition Is Initialization pattern where appropriate, by allocating objects at compile-time, initializing objects when they are declared, and utilizing scope to ensure their automatic destruction.  |  |
| The project follows the Rule of 5.  | For all classes, if any one of the copy constructor, copy assignment operator, move constructor, move assignment operator, and destructor are defined, then all of these functions are defined.  |  |
| The project uses move semantics to move data, instead of copying it, where possible.  | For classes with move constructors, the project returns objects of that class by value, and relies on the move constructor, instead of copying the object.  |  |
| The project uses smart pointers instead of raw pointers.  | The project uses at least one smart pointer: `unique_ptr`, `shared_ptr`, or `weak_ptr`. The project does not use raw pointers.  |  |

### Concurrency

| Criteria  | Specification | Evidence  |
| ------------- | ------------- | ------------- |
| The project uses multithreading.  | The project uses multiple threads in the execution.  |  |
| A promise and future is used in the project.  | A promise and future is used to pass data from a worker thread to a parent thread in the project code. |  |
| A mutex or lock is used in the project.  | A mutex or lock (e.g. `std::lock_guard` or `std::unique_lock`) is used to protect data that is shared across multiple threads in the project code.  |  |
| A condition variable is used in the project.  | A `std::condition_variable` is used in the project code to synchronize thread execution.  |  |

