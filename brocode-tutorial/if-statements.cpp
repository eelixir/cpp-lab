#include <iostream>

int main() 
{
    // if statement

    int age;

    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "You are an adult." << "\n";
    }
    else if(age < 0){
        std::cout << "You haven't been born yet!" << "\n";
    }
    else{
        std::cout << "You are a minor!" << "\n";
    }


    return 0;
}