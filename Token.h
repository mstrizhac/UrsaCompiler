//
// Created by deril on 10/20/24.
//

#pragma once
#include <map>
#include <string>

#include "TokenType.h"


class Token {
    static std::map<std::string, Token> s_TokensByString;

    static void registerToken(Token token) {
        s_TokensByString.try_emplace(token.string, token);
    }
public:
    const std::string string;
    const TokenType type;

    Token(const TokenType& type, const std::string& representation) : string(representation), type(type) {
        registerToken(*this);
    }

    static Token GetToken(const std::string& string) {
        if(s_TokensByString.contains(string)) {
            return s_TokensByString.at(string);
        }
        return {NAME, string};
    }


};
