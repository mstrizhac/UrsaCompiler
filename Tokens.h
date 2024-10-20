//
// Created by deril on 10/20/24.
//

#ifndef TOKENTYPE_H
#define TOKENTYPE_H
#include "Token.h"

class Tokens {
    Tokens();

public:

    static Token EQUAL_OPERATOR;
    static Token GREATER_OPERATOR;
    static Token GREATER_EQUAL_OPERATOR;
    static Token LESS_OPERATOR;
    static Token LESS_EQUAL_OPERATOR;
    static Token PLUS_OPERATOR;
    static Token MINUS_OPERATOR;
    static Token MULTIPLY_OPERATOR;
    static Token DIVIDE_OPERATOR;

    static Token BOOL_TYPE;
    static Token SHORT_TYPE;
    static Token INT_TYPE;
    static Token LONG_TYPE;
    static Token FLOAT_TYPE;
    static Token DOUBLE_TYPE;
    static Token STRING_TYPE;

    static Token OPEN_BRACE;
    static Token CLOSE_BRACE;
    static Token OPEN_PARENTESIS;
    static Token CLOSE_PARENTESIS;
    static Token OPEN_SQUARE_BRACKET;
    static Token CLOSE_SQUARE_BRACKET;
    static Token QUOTE;
    static Token DOUBLE_QUOTE;

    static Token END_LINE;
    static Token END_FILE;
};

#endif //TOKENTYPE_H
