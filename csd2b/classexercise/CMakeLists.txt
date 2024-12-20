cmake_minimum_required(VERSION 3.20)
project(Split LANGUAGES CXX)
add_executable(Split main.cpp class.cpp)
target_compile_features(Split PRIVATE cxx_std_20) 