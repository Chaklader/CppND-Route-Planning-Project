# Install script for directory: /Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/Library/Developer/CommandLineTools/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/lib/libio2d_cairo.a")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_cairo.a" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_cairo.a")
    execute_process(COMMAND "/Library/Developer/CommandLineTools/usr/bin/ranlib" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libio2d_cairo.a")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_brushes_impl.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_helpers.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_paths_impl.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_surface_state_props_impl.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_surfaces_image_impl.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xcairo_surfaces_impl.h"
    "/Users/chaklader/CLionProjects/CppND-Route-Planning-Project/thirdparty/P0267_RefImpl/P0267_RefImpl/P0267_RefImpl/cairo/xio2d_cairo_main.h"
    )
endif()

