cmake_minimum_required(VERSION 3.20)
project(Inheritance LANGUAGES CXX)
add_executable(Inheritance main.cpp trumpet.h trumpet.cpp instrument.h instrument.cpp wind.h wind.cpp 
klarinet.h klarinet.cpp pluckedstring.h pluckedstring.cpp guitar.h guitar.cpp key.h key.cpp piano.h piano.cpp)
target_compile_features(Inheritance PRIVATE cxx_std_20) 