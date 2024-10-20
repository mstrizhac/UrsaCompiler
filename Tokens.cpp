//
// Created by deril on 10/20/24.
//

#include "Tokens.h"
Token Tokens::EQUAL_OPERATOR = Token(OPERATOR, "=");
Token Tokens::GREATER_OPERATOR = Token(OPERATOR, ">");
Token Tokens::GREATER_EQUAL_OPERATOR = Token(OPERATOR, ">=");
Token Tokens::LESS_OPERATOR = Token(OPERATOR, "<");
Token Tokens::LESS_EQUAL_OPERATOR = Token(OPERATOR, "<=");
Token Tokens::PLUS_OPERATOR = Token(OPERATOR, "+");
Token Tokens::MINUS_OPERATOR = Token(OPERATOR, "-");
Token Tokens::MULTIPLY_OPERATOR = Token(OPERATOR, "*");
Token Tokens::DIVIDE_OPERATOR = Token(OPERATOR, "/");

Token Tokens::BOOL_TYPE = Token(DATA_TYPE, "bool");
Token Tokens::SHORT_TYPE = Token(DATA_TYPE, "short");
Token Tokens::INT_TYPE = Token(DATA_TYPE, "int");
Token Tokens::LONG_TYPE = Token(DATA_TYPE, "long");
Token Tokens::FLOAT_TYPE = Token(DATA_TYPE, "float");
Token Tokens::DOUBLE_TYPE = Token(DATA_TYPE, "double");
Token Tokens::STRING_TYPE = Token(DATA_TYPE, "string");

Token Tokens::OPEN_BRACE = Token(BRACKETS, "{");
Token Tokens::CLOSE_BRACE = Token(BRACKETS, "}");
Token Tokens::OPEN_PARENTESIS = Token(BRACKETS, "(");
Token Tokens::CLOSE_PARENTESIS = Token(BRACKETS, ")");
Token Tokens::OPEN_SQUARE_BRACKET = Token(BRACKETS, "[");
Token Tokens::CLOSE_SQUARE_BRACKET = Token(BRACKETS, "]");
Token Tokens::QUOTE = Token(BRACKETS, "'");
Token Tokens::DOUBLE_QUOTE = Token(BRACKETS, "\"");

Token Tokens::END_LINE = Token(TokenType::END_LINE, ";");
Token Tokens::END_FILE = Token(TokenType::END_FILE, "\x0A");