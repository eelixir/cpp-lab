#include <iostream>

int main() 
{
    // ternary operator ?: = replacement to an if/else statement
    // condition ? expression1 : expression2;

    int grade = 75;

    grade >= 60 ? std::cout << "You pass!": std::cout << "You fail!";

    return 0;
}