#include <iostream>
#include <string>
using namespace std;

// Move semantics is a feature that allows our program to transfer ownership
// of resources (like memory, files, etc.) from one object to another instead
// of copying them. Results in: faster performance, less memory usage, better
// efficiency.

int main() {
    std::string original = "Hello, World!";

    // Copying the string
    std::string copy = original;

    // Moving the string
    std::string moved = std::move(original);

    // Output all three
    cout << "Original: '" << original << "'" << endl;
    cout << "Copy: '" << copy << "'" << endl;
    cout << "Moved: '" << moved << "'" << endl;

    return 0;
}