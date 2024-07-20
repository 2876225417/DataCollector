cmake_minimum_required(VERSION 3.4...3.18)
project(example)

set(CMAKE_CXX_STANDARD 11)

# Add pybind11 include paths
include_directories("C:/Users/28762/miniconda3/envs/DataC/Include")
include_directories("C:/Users/28762/miniconda3/envs/DataC/Lib/site-packages/pybind11/include")

# Manually set the path to pybind11
set(pybind11_DIR "C:/Users/28762/miniconda3/envs/DataC/Lib/site-packages/pybind11/share/cmake/pybind11")

# Find pybind11 package
find_package(pybind11 CONFIG REQUIRED)

# Create the pybind11 module
pybind11_add_module(ex ex.cpp)
