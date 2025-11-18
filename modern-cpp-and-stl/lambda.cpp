#include <iostream>
using namespace std;

// Lambda function is a small, anonymous function you can write directly
// in your code. It's useful when you need a quick function without
// naming it or declaring it separately.

int main() {

    // Defining a lambda
    auto res = [](int x){
        return x + x;
    };

    // Using the lambda
    cout << res(5);
    
    return 0;
}