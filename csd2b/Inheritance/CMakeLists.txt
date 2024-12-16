cmake_minimum_required(VERSION 3.20)
project(Inheritance LANGUAGES CXX)
add_executable(Inheritance main.cpp instrument.cpp instrument.h wind.cpp wind.h trumpet.cpp trumpet.h)
target_compile_features(Inheritance PRIVATE cxx_std_20) 