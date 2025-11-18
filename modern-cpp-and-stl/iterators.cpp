#include <iostream>
#include <vector>
using namespace std;

// Iterators are used to access and iterate through elements of
// data structures (vectors, sets, etc.) by "pointing" to them.
//
// It is called an "iterator" because "iterating" is the
// technical term for looping.

int main() {
    vector<int> v = {10, 20, 30, 40};

    // Using iterator to traverse the vector
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
        cout << *it << " ";
    cout << endl;

    vector<int> vec = {10, 20, 30, 40, 50};

    // Normal iterator
    cout << "Forward iteration: ";
    for (auto it = vec.begin(); it != vec.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    // Constant iterator
    cout << "Forward (read-only) iteration: ";
    for (auto it = vec.cbegin(); it != vec.cend(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    // Reverse iterator
    cout << "Reverse iteration: ";
    for (auto it = vec.rbegin(); it != vec.rend(); ++ it){
        cout << *it << " ";
    }
    cout << endl;

    // Iterator pointing to the first element
    auto it = v.begin();

    // Dereferencing iterator to access value
    cout << "First element: " << *it << endl;

    // Dereferencing iterator to update value
    *it = 100;

    // Printing updated first element
    cout << "updated first element: " << *it << endl;

    *it = 10;

    // Incrementing iterator to move to the next element
    ++it;
    cout << "After incremenet: " << *it << endl;

    // Decrementing iterator to move back to the previous element
    --it;
    cout << "After decrement: " << *it << endl;

    // Adding/Subtracting Integer to Iterators
    // Moving iterator forward by 2 positions
    it = it + 2;
    cout << "Element after moving forward by 2: " << *it << endl;

    // Moving iterator forward by 1 position
    it = it - 1;
    cout << "Element after moving backward by 1: " << *it << endl;

    
    return 0;
}