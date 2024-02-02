# PROJECT SETUP (APPLE SILICON)

### A. Clone the project

<br>

Using HTTPS:

```shell
git clone https://github.com/udacity/CppND-Route-Planning-Project.git --recurse-submodules
```

With SSH:

```shell
git clone git@github.com:udacity/CppND-Route-Planning-Project.git --recurse-submodules
```

### B. List of Dependencies

<br>
Dependencies for Running Locally

<ul style="list-style-type: square;">
  <li>cmake >= 3.11.3</li>
  <li>make >= 4.1 (Linux, Mac), 3.81 (Windows)</li>
  <li>gcc/g++ >= 7.4.0</li>
  <li>IO2D Graphics library</li>
</ul>



### C. Dependencies Installation 

<br>

**I. cmake Installation** 

```shell
arch -arm64 brew install cmake
```

<br>

**II. IO2D Graphics Ligrary Installation**

<br>

1. Enter the `thirdparty` folder in the root of the project, then clone the GitHub repo:

```shell
git clone --recurse-submodules https://github.com/cpp-io2d/P0267_RefImpl
```

<br>

2. Download the latest version extra C++ standard library headers from LLVM, extract, rename it to clang
and then, put inside the _thirdparty_ folder of the project

<br>

```shell
curl -L https://github.com/llvm/llvm-project/releases/download/llvmorg-17.0.6/clang+llvm-17.0.6-arm64-apple-darwin22.0.tar.xz -o clang+llvm-17.0.6-arm64-apple-darwin22.0.tar.xz

tar -xvf clang+llvm-17.0.6-arm64-apple-darwin22.0.tar.xz

mv clang+llvm-17.0.6-arm64-apple-darwin22.0 clang
mv clang /LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/
```
<br>

3. To configure your environment to use the custom Clang compiler and libraries for your C++ project, you need to add the following lines to your .bash_profile or .bashrc file.
as below:

```shell
export CXXFLAGS="-nostdinc++ -isystem/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/include/c++/v1"
export LDFLAGS="-L/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/lib -Wl,-rpath,/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/lib"

source ~/.bash_profile
```

4. IO2D employs CMake as a build system. The following variables control the configuration process:

IO2D_DEFAULT Controls a selection of default backend which is used when non-template symbols from std::experimental::io2d, like "brush" or "surface", are referenced. There're 5 backends in this RefImpl:

- CAIRO_WIN32
- CAIRO_XLIB
- CAIRO_SDL2
- COREGRAPHICS_MAC
- COREGRAPHICS_IOS

If no default backend was defined, the build script will try to automatically set an appropriate Cairo backend based on the host environment.

**IO2D_ENABLED** Specifies a list of enabled backends, which means a set of backends included in the build process. By default, a value of IO2D_DEFAULT is used, so this variable can be left undefined. If, however, you want to have a multi-backend configuration of IO2D, this variable has to contain a valid list, for instance: "COREGRAPHICS_MAC;CAIRO_XLIB".

**IO2D_WITHOUT_SAMPLES** This variable can be defined to exclude sample code from the build process. Please note that some samples might be exculed from the build process depending on your environment. More specifically, the SVG example requires Boost. Pass any value, like "1" to skip this part.

**IO2D_WITHOUT_TESTS** This variable controls whether test suites will be included in the build process. Pass any value, like "1" to skip this part.

Comment these lines from _CMakeLists.txt_ under P0267_RefImpl in the _thirdparty_ folder:

```c++
if( NOT DEFINED IO2D_WITHOUT_SAMPLES )
    add_subdirectory(P0267_RefImpl/Samples)
endif()
```

5. Install **Cairo/Xlib** on **macOS (Apple Silicon)**

<br>
CMake script expects **cairo** and **graphicsmagick** to be installed. **libpng** is required in order to run tests. Since **cairo** in brew doesn't support **X11**, 
**MacPorts** can be used instead. Installation steps assuming Brew is already installed:

- Install libpng

```shell
arch -arm64 brew install libpng
```

- Install graphicsmagick

```shell
arch -arm64 brew install graphicsmagick
```

- Install MacPorts from the official website https://www.macports.org/install.php

- Install Cairo

```shell
sudo /opt/local/bin/port -N -k install cairo +x11
```

- Install pkg-config

```shell
brew install pkg-config
```

- Install XCode and check if the command line tools are installed by: `xcode-select --install`

- Install X11 using Quartz

```shell
arch -arm64 brew install xquartz
```

- Install xorg-macros in the _thirdparty_ folder which contains _xproto.pc_:

```shell
git clone https://gitlab.freedesktop.org/xorg/util/macros
cd macros
./autogen.sh
make
```    

- To configure the environment, add the following lines to your .bash_profile or .bashrc file:

```shell
export PKG_CONFIG_PATH=/opt/X11/lib/pkgconfig
export CPLUS_INCLUDE_PATH=/opt/X11/include
export C_INCLUDE_PATH=/opt/X11/include 
export LIBRARY_PATH=/opt/X11/lib

source ~/.bash_profile
```


### D. Project Building 

<br>

1. Enter the _**thirdparty/P0267_RefImpl**_ and follow the steps:

```shell
cd P0267_RefImpl
mkdir build
cd build
cmake  -DCMAKE_BUILD_TYPE=Debug  -DIO2D_WITHOUT_TESTS=1  ..
make 
```    


2. Enter to the root of the project and run the command: 

```shell
mkdir build 
cd build 
cmake .. 
make 
.OSM_A_star_search
```    


### E. Result 

Finally, we should see the map with route:


![Map With Route](map.png)
