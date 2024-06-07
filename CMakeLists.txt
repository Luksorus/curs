cmake_minimum_required(VERSION 3.26)
project(Curs)

set(CMAKE_CXX_STANDARD 17)

add_executable(Curs main.cpp
        Informs/informs.h
        resheniya/reshenie_diskr.h
        resheniya/b_null.h
        resheniya/c_null.h
        Calculator/Calculator.h
)
