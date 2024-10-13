# Smart Home Dashboard in Slint C++

A Smart Home C++ application that's using [Slint](https://slint.dev) for the user interface and CMake for the build system. The app is intended to be run on Raspberry Pi 4 having a 10" capacitive screen, but for development purposes we'll be working on desktop.

## About

This is a port of our existing Qt/QML implementation of a smart home dashboard. Similar to the Qt implementation, this sample only contains the UI and bit of logic to simulate the data received from sensors/api without the real API/sensor integration.

## Prerequisites

In order to use this template and build a C++ application, you need to install a few tools:

  * **[cmake](https://cmake.org/download/)** (3.21 or newer)
  * A C++ compiler that supports C++ 20 

If your target environment is Linux or Windows on an x86-64 architecture, then you may also opt into downloading one of our binary Slint packages. These are pre-compiled and require no further tools. You can find setup instructions and download links at

<https://slint.dev/docs/cpp/cmake.html#install-binary-packages>

Alternatively, this template will automatically download the Slint sources and compile them. This option requires you to install Rust by following the [Rust Getting Started Guide](https://www.rust-lang.org/learn/get-started). Once this is done, you should have the ```rustc``` compiler and the ```cargo``` build system installed in your path.

## Usage

2. Clone the git repo and navigate into it:
    ```
    git clone https://github.com/koaleygroup/smart-home-dashboard-slint
    cd smart-home-dashboard-slint
    ```
3. Configure with CMake
   ```
   mkdir build
   cmake -B build
   ```
4. Build with CMake
   ```
   cmake --build build
   ```
5. Run the application binary
    * Linux/macOS:
        ```
        ./build/smarthome
        ```
    * Windows:
        ```
        build\Debug\smarthome.exe
        ```
