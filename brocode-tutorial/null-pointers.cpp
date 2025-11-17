#include <iostream>

int main()
{
    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "Address not assigned";
    }
    else{
        std::cout << "Address assigned\n";
    }

    return 0;
}