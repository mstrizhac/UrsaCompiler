cmake_minimum_required(VERSION 3.29)
project(UrsaLang)

set(CMAKE_CXX_STANDARD 26)

add_executable(UrsaLang main.cpp
        Lexer.cpp
        Lexer.h
        Token.cpp
        Token.h
        Tokens.h
        TokenType.cpp
        TokenType.h
        TokenInstance.cpp
        TokenInstance.h
        Tokens.cpp)
