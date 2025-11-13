#include <iostream>

double square(double length);
double cube(double length);

int main() 
{
    double length = 5.0;
    double area = square(length);
    double volume = cube(length);


    std::cout << "Area is " << area << "cm^2\n";
    std::cout << "Volume is " << volume << "cm^3\n";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}