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
    ./manjaro
    ```

## Clangd Integration

To generate the `compile_commands.json` file for `clangd`, run the following command from within the `build` directory:

```bash
cmake -DCMAKE_EXPORT_COMPILE_COMMANDS=ON ..
```

You should run this command whenever you add or remove source files to ensure `compile_commands.json` is up to date.

## Code Formatting

This project uses `clang-format` with the default style. To format a file, you can run the following command:

```bash
find include src -name "*.h" -o -name "*.cpp" | xargs clang-format -i
```