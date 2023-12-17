cmake_minimum_required(VERSION 3.27)
project(MyCppProj
        VERSION 0.0.1
        DESCRIPTION "My first project cpp with CMake"
        LANGUAGES CXX)

file(GLOB_RECURSE SOURCE_FILES src/*.cpp)
add_executable(MyCppProjBinary 
                src/main.cpp
                ${SOURCE_FILES}
)
target_compile_features(MyCppProjBinary PRIVATE cxx_std_20)