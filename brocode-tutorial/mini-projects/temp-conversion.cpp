#include <iostream>

int main() 
{
    double temp;
    char unit;

    std::cout << "******* TEMP CONVERSION *******" << "\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n";
    std::cout << "What unit do you want to convert to?: ";
    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "Enter the temp in Celsius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temperature is " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "Enter the temp in Fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temperature is " << temp << "C\n";
    }
    else{
        std::cout << "Only enter C or F\n";
    }

    std::cout << "*******************************" << "\n";

    return 0;
}