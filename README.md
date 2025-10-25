# Manjaro C++ Project

This is a C++ project using CMake and Ninja.

## Build and Run

1.  **Create a build directory:**
    ```bash
    mkdir build
    ```
2.  **Navigate into the build directory:**
    ```bash
    cd build
    ```
3.  **Generate build files with CMake and Ninja:**
    ```bash
    cmake -G Ninja ..
    ```
4.  **Compile the project with Ninja:**
    ```bash
    ninja
    ```
5.  **Run the executable:**
    ```bash
    ./game_console
    ```

## Source Files Update

To update list of source files, please run command in project root:

```bash
python script/source_gen.py > src/SOURCES.cmake
```

## Code Formatting

This project uses `clang-format` with the default style. To format a file, you can run the following command:

```bash
find include src -name "*.h" -o -name "*.cpp" | xargs clang-format -i
```