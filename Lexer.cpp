//
// Created by deril on 10/20/24.
//

#include "Lexer.h"

#include "Tokens.h"

void Lexer::parse() {
    m_Tokens.emplace_back(getNextToken());
    while (m_Tokens.at(m_Tokens.size() - 1).type != TokenType::END_FILE) {
        m_Tokens.emplace_back(getNextToken());
    }
}

bool IsSpace(char c) {
    return c == ' ' || c == '\t' || c == '\n' || c == '\r';
}


Token Lexer::getNextToken() {
    char c = ' ';
    while(IsSpace(c)) {
        if(m_CurrentPosition >= m_Source.size()) return Tokens::END_FILE;
        c = getCurrentChar();
        m_CurrentPosition++;
    }

    std::string currentToken;

    while(!IsSpace(c)) {
        if(m_CurrentPosition >= m_Source.size()) return Tokens::END_FILE;
        currentToken += c;
        c = getCurrentChar();
        m_CurrentPosition++;
    }
    return Token::GetToken(currentToken);
}

char Lexer::getCurrentChar() {
    return m_Source[m_CurrentPosition];
}

