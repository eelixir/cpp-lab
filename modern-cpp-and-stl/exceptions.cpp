#include <iostream>
using namespace std;

// Exception Handling in C++ is a mechanism to detect and manage runtime
// errors (erros that occur during program execution) in a structured way.

int main() {
    // try-catch block
    try {
        int age = 15;
        if (age >= 18) {
            cout << "Access granted - you are old enough.";
        } else{
            throw(age);
        }
    }
    catch(int myNum){
        cout << "Access denied - You must be at least 18 years old.\n";
        cout << "Age is: " << myNum;
    }

    return 0;
}