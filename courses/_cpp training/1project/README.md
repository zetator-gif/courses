# C++ Training Project

This project is designed to provide training in C++ programming concepts, specifically focusing on template functions. It includes implementations of a generic `copy` function and a `swap` function, along with their respective specializations.

## Project Structure

```
courses
└── _cpp training
    └── 1project
        ├── src
        │   ├── copy.cpp
        │   └── swap.cpp
        ├── CMakeLists.txt
        └── README.md
```

## Overview

- **copy.cpp**: Contains a template function `copy` that copies elements from a range defined by input iterators to an output iterator.
- **swap.cpp**: Includes a template function `swap` that swaps two elements of type T, along with a specialized version for arrays.

## Building the Project

To build the project, you will need to have CMake installed. Follow these steps:

1. Navigate to the project directory:
   ```
   cd courses/_cpp\ training/1project
   ```

2. Create a build directory:
   ```
   mkdir build
   cd build
   ```

3. Run CMake to configure the project:
   ```
   cmake ..
   ```

4. Build the project:
   ```
   make
   ```

## Usage

After building the project, you can use the compiled binaries as needed. Refer to the individual source files for specific usage examples of the `copy` and `swap` functions.

## Contributing

Feel free to contribute to this project by adding more examples or improving the existing code.