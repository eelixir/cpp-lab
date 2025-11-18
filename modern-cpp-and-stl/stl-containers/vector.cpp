#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Vector in C++ STL
//
// A vector represents a dynamic sized array in the Standard Template Library (STL)
// that automatically grows when elements are added beyond current capacity

int main(){

    // Declares an empty vector
    vector<int> v1;

    // Declares vector with given size and fills it with a value
    vector<int> v2(3, 5);

    // Print items of v2
    for (int x : v2) {
        cout << x << " ";
    }

    cout << endl;

    // Initialises vector using initialiser list
    vector<int> v3 = {1, 2, 3};

    // Insert elements
    // Inserts 4 at the back
    v3.push_back(4); 
    // Inserts 0 at index 0
    v3.insert(v3.begin() + 0, 0); 

    // Print items of v3
    for (int x : v3) {
        cout << x << " ";
    }

    // Accessing elements
    // Accessing using operator[]
    cout << "Element at index 2 using []: " << v3[2] << endl;
    // Accessing using at()
    cout << "Element at index 3 using at(): " << v3.at(3) << endl;

    // Updating elements
    cout << "Original value at index 1: " << v2[1] << endl;
    // Updating the element at index q
    v2[1] = 50;
    cout << "Updated value at index 1: " << v2[1] << endl;

    // Find vector size
    cout << "Size of v3 is " << v3.size() << '\n';
    
    // Traverse vector
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << '\n';


    // Delete elements
    v3.pop_back(); // delete last element
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << '\n';


    v3.erase(find(v3.begin(), v3.end(), 2));
    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << " ";
    cout << '\n';

    // Vector is empty
    if(v1.empty()){
        cout << "Vector is empty." << endl;
    }

    v1.push_back(100);
    if(!v1.empty()){
        cout << "Vector is not empty. First element " << v1[0] << endl;
    }

    cout << "\n";

    // Multidimensional Vectors

    // Decleration of a 2D Vector
    vector<vector<int>>matrix={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    
    cout<<"Traversing 2D vector using index-based loop:\n";
    
    // Traversing using index-based for loop
    for(int i=0;i<matrix.size();i++){
        for(int j=0;j<matrix[i].size();j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}