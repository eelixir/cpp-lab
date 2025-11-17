#include <iostream>

enum Day {sunday = 0, monday = 1};

int main(){
    Day today = monday;

    switch(today){
        case 0:  std::cout << "It's a sunday!\n";
                        break;
        case 1:  std::cout << "it's monday!\n";
                        break;
    }

    return 0;
}