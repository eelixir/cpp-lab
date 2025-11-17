#include <iostream>

int main(){

    // dynamic memory = memory that is allocated after the program
    //                  is already compiled & running
    //                  Use the 'new operator to allocate
    //                  memory in the heap rather than the stack
    //                  
    //                  Useful when don't know how much memory
    //                  we will need. Makes our program more
    //                  flexible, espically when accepting user input

    int *pNum = NULL;

    pNum = new int;

    *pNum = 21;

    std::cout << "address: " << pNum << '\n';
    std::cout << "value: " << pNum << '\n';

    // freeing memory, preventing memory leak
    delete pNum;

    return 0;
}