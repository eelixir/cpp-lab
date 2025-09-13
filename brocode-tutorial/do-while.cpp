#include <iostream>

int main() 
{
    // do while loop
    int number;

    do{
        std::cout << "Enter a positive num: ";
        std::cin >> number;
    }while(number < 0);

    return 0;
}