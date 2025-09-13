#include <iostream>

int main() 
{
    // useful string methods

    std::string name;

    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    if(name.empty()){
        std::cout << "You didn't enter your name\n";
    }
    else if(name.length() > 12){
        std::cout << "Your name can't be over 12 char!\n";
    }
    else{
        std::cout << "Welcome " << name << "\n";
    }

    name.append("@gmail.com");
    name.erase(0, 3);
    name.insert(0, "@");
    name.clear();
    std::cout << name.find(' ');

    return 0;
}
