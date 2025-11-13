#include <iostream>

void happyBirthday(std::string name, int age);

int main() 
{
    // function = a block of reusable code

    std::string name = "Tom";
    int age = 19;

    happyBirthday(name, age);

    return 0;
}

void happyBirthday(std::string name, int age){
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday " << name <<  "!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "You are now " << age << " years old!\n";
}