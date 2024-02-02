**PROJECT SETUP (APPLE SILICON)** 


Clone the project from the GitHub repository

Using HTTPS:

    git clone https://github.com/udacity/CppND-Route-Planning-Project.git --recurse-submodules

With SSH:

    git clone git@github.com:udacity/CppND-Route-Planning-Project.git --recurse-submodules


Dependencies for Running Locally

    cmake >= 3.11.3
    make >= 4.1 (Linux, Mac), 3.81 (Windows)
    gcc/g++ >= 7.4.0
    IO2D


CMake Installation 

    $ arch -arm64 brew install cmake


IO2D  

Enter the `thirdparty` folder, then clone the IO2D repo:

    git clone --recurse-submodules https://github.com/cpp-io2d/P0267_RefImpl



C++ Standard Library Headers


Download the latest extra C++ standard library headers in your desktop. In my case, I downloaded the v17.0.6

LINK: https://github.com/llvm/llvm-project/releases/download/llvmorg-17.0.6/clang+llvm-17.0.6-arm64-apple-darwin22.0.tar.xz

Unzip and rename to `clang` and copy to the `thridparty` folder in the project

Provide the EXPORTs in the .bash_profile or .bashrc file:

    export CXXFLAGS="-nostdinc++ -isystem/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/include/c++/v1"
    export LDFLAGS="-L/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/lib -Wl,-rpath,/LOCAL/PATH/OF/CppND-Route-Planning-Project/thirdparty/clang/lib"


Comment these lines from CMakeLists.txt under P0267_RefImpl

if( NOT DEFINED IO2D_WITHOUT_SAMPLES )
    add_subdirectory(P0267_RefImpl/Samples)
endif()

IO2D employs CMake as a build system. The following variables control the configuration process:

IO2D_DEFAULT Controls a selection of default backend which is used when non-template symbols from std::experimental::io2d, like "brush" or "surface", are referenced. There're 5 backends in this RefImpl:

    CAIRO_WIN32
    CAIRO_XLIB
    CAIRO_SDL2
    COREGRAPHICS_MAC
    COREGRAPHICS_IOS

If no default backend was defined, the build script will try to automatically set an appropriate Cairo backend based on the host environment.

IO2D_ENABLED Specifies a list of enabled backends, which means a set of backends included in the build process. By default, a value of IO2D_DEFAULT is used, so this variable can be left undefined. If, however, you want to have a multi-backend configuration of IO2D, this variable has to contain a valid list, for instance: "COREGRAPHICS_MAC;CAIRO_XLIB".

IO2D_WITHOUT_SAMPLES This variable can be defined to exclude sample code from the build process. Please note that some samples might be exculed from the build process depending on your environment. More specifically, the SVG example requires Boost. Pass any value, like "1" to skip this part.

IO2D_WITHOUT_TESTS This variable controls whether test suites will be included in the build process. Pass any value, like "1" to skip this part.


Cairo/Xlib on macOS
CMake script expects cairo and graphicsmagick to be installed. libpng is required in order to run tests. Since cairo in brew doesn't support X11, MacPorts can be used instead. Installation steps:

Install Brew: `/usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"`
Install libpng: `arch -arm64 brew install libpng`
Install graphicsmagick: `arch -arm64 brew install graphicsmagick`
Install MacPorts: `https://www.macports.org/install.php`
Install Cairo: `sudo /opt/local/bin/port -N -k install cairo +x11`
Install pkg-config: `brew install pkg-config`
Install XCode and check if the command line tools are installed by: `xcode-select --install`

IO2D library needs to build support for the Xlib Cairo backend X11 development libraries, install X11 
using Xquartz: `arch -arm64 brew install xquartz`

Install xorg-macros in the `thirdparty` folder which contains xproto.pc:

    git clone https://gitlab.freedesktop.org/xorg/util/macros
    cd macros
    ./autogen.sh
    make

Provide the EXPORTs in the .bash_profile or .bashrc file:

    export PKG_CONFIG_PATH=/opt/X11/lib/pkgconfig
    export CPLUS_INCLUDE_PATH=/opt/X11/include
    export C_INCLUDE_PATH=/opt/X11/include
    
    export LIBRARY_PATH=/opt/X11/lib

Enter the P0267_RefImpl and follow the steps:

    cd P0267_RefImpl
    mkdir build
    cd build
    cmake -G "Xcode" --config Debug "-DCMAKE_BUILD_TYPE=Debug" ../.
    
    cmake  -DCMAKE_BUILD_TYPE=Debug  -DIO2D_WITHOUT_TESTS=1  ..
    make 


Then, go to the root of the project:

    mkdir build 
    cd build 
    cmake .. 
    make 
    .OSM_A_star_search



