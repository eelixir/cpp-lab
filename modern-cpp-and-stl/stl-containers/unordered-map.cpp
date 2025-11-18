#include <iostream>
#include <unordered_map>
using namespace std;

// Unordered_map is an unordered associative container that stores data
// in the form of unique key-value pairs. But unlike maps, unordered maps
// stores its elements using hashing
// This provides average constant-time complexity O(1) for search, insert
// and delete operations but the elements are not sorted in any particular order

int main() {

    // Creating an unordered_map with integer
    // keys and string values
    unordered_map<int, string> um =
    {{1, "Geeks"}, {2, "For"}, {3, "C++"}};

    for (auto i : um)
        cout << i.first << ": " << i.second
        << endl;

    // Insert elements using square brackets
    um[1] = "Geeks";

    // Insert elements using insert() method
    um.insert({2, "For"});
    um.insert({3, "C++"});

    for (auto i : um)
        cout << i.first << ": " << i.second
        << endl;

    // Access value associated with key 2
    // using [] operator
    cout << um[2] << endl;

    // Access value associated with key 1
    // using at() function
    cout << um.at(1);

    // Updating value associated with key 2
    // Using [] operator
    um[2] = "By";
    cout << um[2] << endl;

    // Updating value associated with key 1
    // using at() function
    um.at(1) = "Tips";
    cout << um.at(1);

    // Finding element with key 2
    auto it = um.find(2);

    if (it != um.end())
        cout << it->first << ": " << it->second;
    else cout << "Not Found";

    // Traversing using iterators with loop
    for (auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second
        << endl;

    // Delete element which have key 2
    um.erase(2);

    // Delete first element
    um.erase(um.begin());

    for (auto it = um.begin(); it != um.end(); it++)
        cout << it->first << ": " << it->second
        << endl;
        
    return 0;
}