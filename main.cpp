#include <iostream>
#include <fstream>
#include <sstream>

#include "Lexer.h"

int main() {
    std::ifstream input("../input.u");
    std::stringstream s;
    s << input.rdbuf();
    Lexer lexer(s.str());
    lexer.parse();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
