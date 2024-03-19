cmake_minimum_required(VERSION 3.27)
project(OOPLaboratory3)

set(CMAKE_CXX_STANDARD 14)

include_directories(Laboratory3)

add_executable(OOPLaboratory3
        Laboratory3/complex_number.cpp
        Laboratory3/complex_number.h
        Laboratory3/complex_test.cpp
        Laboratory3/complex_test.h
        Laboratory3/main.cpp
        Laboratory3/tester.cpp
        Laboratory3/BankAccount.cpp
        Laboratory3/BankAccount.h)
