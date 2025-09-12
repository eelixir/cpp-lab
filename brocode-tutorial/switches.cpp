#include <iostream>

int main() 
{
    // switch = alternative to using many "else if" statements
    //          compare one value against matching cases

    int month;
    std::cout << "Enter the month (0-4): ";
    std::cin >> month;

    switch(month){
        case 1:
            std::cout << "It is jan";
            break;
        case 2:
            std::cout << "It is feb";
            break;
        case 3:
            std::cout << "It is march";
            break;    
        case 4:
            std::cout << "It is april";
            break;
        default:
            std::cout << "Please enter in only number (0-4)!" << "\n";
        // cba to write all 12
        }

    return 0;
}