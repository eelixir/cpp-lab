#include <iostream>

int main() 
{
    int temp;

    std::cout << "Enter the temp: ";
    std::cin >> temp;

        if(temp > 0 && temp < 30){
            std::cout << "The temp is good" << "\n";
        }
        else{
            std::cout << "The temp is bad!" << "\n";
        }


    return 0;
}