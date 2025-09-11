#include <iostream>

namespace first{
    std::string namespaceCheck = "first namespace";
}

namespace second{
    std::string namespaceCheck = "second namespace";
}

int main() {
    // This is a comment
    /*
        This is a
        multi-line
        comment
    */
    std::cout << "Hello world!" << '\n';

    int x; // declaration
    x = 2; // assignment
    int y = 6; 
    int age = 18;

    std::cout << x << '\n';
    std::cout << y << '\n';

    // sum two int
    int sum = x + y;
    std::cout << sum << '\n';

    // decimal
    double big = 6.442529;
    std::cout << big << '\n';

    // single character
    char grade = 'A';
    char currency = '$';

    std::cout << currency << '\n';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = true;

    // string
    std::string name = "Thomas";
    std::cout << "Hello " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';

    // constant
    const double PI = 3.14159; // naming convention for const is to make UPPERCASE
    double radius = 10;
    double circumference = 2 * PI * radius;
    std::cout << circumference << "cm" << '\n';

    // namespaces
    std::string namespaceCheck = "no namespace";
    std:: cout << namespaceCheck << '\n';
    std:: cout << first::namespaceCheck << '\n';
    std:: cout << second::namespaceCheck << '\n';

    return 0;
}