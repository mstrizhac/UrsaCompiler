//
// Created by deril on 10/20/24.
//

#pragma once
#include <vector>

#include "Token.h"


class Lexer {
    std::vector<Token> m_Tokens;
    std::string m_Source;
    int m_CurrentPosition = 0;
    int m_CurrentLine = 0;

    char getCurrentChar();
public:
    Lexer(const std::string& source) : m_Source(source) {}

    void parse();
    Token getNextToken();
};
