#include <iostream>
#include <map>
using namespace std;

// Maps are associative containers that store data as stored pairs of keys and values
// It is an implementation of self-balancing binary search tree.
// Maps allow searching, insertion, and deletion and take O(log n) time
// Keys are stored in ascending order

int main() {
    
    // Creating an empty map
    map<int, string> m1;

    // Initialise map with list
    map<int, string> m2 = {{1, "Geeks"},
              {2, "For"}, {3, "Geeks"}};

    for (auto& p : m2)
        cout << p.first << " " <<
        p.second << endl;
    
    map<int, string> m = {{2, "For"}, {3, "Geeks"}};

    // Inserting a key value pair
    m.insert({1, "Geeks"});

    for (auto x: m)
        cout << x.first << " " << x.second
        << endl;

    // Accessing elements
    cout << m[1] << endl;
    cout << m.at(2);
    cout << "\n";

    // Updating elements
    m[0] = "Tweaks";
    m.at(1) = "By";

    cout << m[0] << endl;
    cout << m.at(1);
    cout << "\n";

    // Finding elements
    auto it = m.find(2);

    if (it != m.end())
        cout << it->first << " " << it->second;
    else cout << "Key not Found!"; 

    // Traversing using iterators
    for (auto it = m.begin(); it != m.end(); ++it)
        cout << it->first << " " << it->second
        << endl;

    // Deleting by key
    m.erase(2);

    // Deleting by iterator
    m.erase(m.begin());

    for(auto i : m)
        cout << i.first << " " << i.second
        << endl;
        
    return 0;
}