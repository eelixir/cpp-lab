#include <iostream>
#include <vector>
#include <cmath>

// namespace
namespace first{
    std::string namespaceCheck = "first namespace";
}

namespace second{
    std::string namespaceCheck = "second namespace";
}

// typedef
// typedef std::string text_t;
using text_t = std::string;

// main function
int main() {
    // This is a comment
    /*
        This is a
        multi-line
        comment
    */

    // hello world
    std::cout << "Hello world!" << '\n';

    // integers
    int x; // declaration
    x = 2; // assignment
    int y = 6; 
    int age = 18;

    // terminal output (print)
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
    std::cout << namespaceCheck << '\n';
    std::cout << first::namespaceCheck << '\n';
    std::cout << second::namespaceCheck << '\n';

    // typedef
    text_t firstname = "john";
    std::cout << firstname << '\n';

    // arithmetic operators
    int students = 20;

    students += 1;
    students++;
    
    students -= 1;
    students--;

    students = students * 2;
    students *= 2;
    
    students = students / 2;
    students /= 2;
    std::cout << students << '\n';

    // modulus, remainder
    int remainder = students % 2;
    std:: cout << remainder << '\n';

    // type conversion
    char t = 100;
    std::cout << t << '\n';

    int correct = 8;
    int questions = 10;
    double score = double(correct) / double(questions) * 100;
    std::cout << score << "%" << "\n";

    // user input
    // std::string Name;
    // int Age;

    // std::cout << "What's your age?: ";
    // std::cin >> Age;

    // std::cout << "What is your full name?: ";
    // std::getline(std::cin >> std::ws, Name); // allows whitespace in string

    // std::cout << "Hello " << Name << '\n';
    // std::cout << "You are " << Age << " years old." << "\n";

    // math functions
    double xx = 3;
    double yy = 4;
    double zz;

    zz = std::max(xx, yy);
    std::cout << zz << "\n";

    zz = std::min(xx, yy);
    std::cout << zz << "\n";
    
    // power of
    zz = pow(2, 3);
    std::cout << zz << "\n";

    // square root
    zz = sqrt(9);
    std::cout << zz << "\n";

    // absolute value
    zz = abs(-3);
    std::cout << zz << "\n";

    xx = 3.99;
    // round
    zz = round(xx);
    std::cout << zz << "\n";

    // ceiling, round up
    zz = ceil(xx);
    std::cout << zz << "\n";

    // floor, round down
    zz = floor(xx);
    std::cout << zz << "\n";

    return 0;
}