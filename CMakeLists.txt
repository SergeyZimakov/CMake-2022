cmake_minimum_required(VERSION 3.10)

# set the project name
project(StringModifier)

# add the executable
add_executable(stringModifier main.cpp)

set_target_properties(
    stringModifier PROPERTIES
    CXX_STANDARD 11
    CXX_STANDARD_REQUIRED ON
)