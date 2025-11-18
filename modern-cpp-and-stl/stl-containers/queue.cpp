#include <iostream>
#include <queue>
using namespace std;

// A queue is a container adapter that stores elements in FIFO order

int main() {
    queue<int> q;
    q.push(10);
    q.push(5);

    // Accessing the front and back elements
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;

    // Removing an element from the front
    q.pop();

    cout << "Front element after pop: " << q.front() << endl;

    // Pushing elements into the queue
    q.push(3);
    q.push(4);
    q.push(5);
    
    // Accessing the front and back elements
    cout << q.front() << endl;
    cout << q.back() << endl;

    // check if queue is empty
    if (q.empty()) {
        cout << "Queue is empty" << endl;
    }
    else{
        cout << "Queue is not empty" << endl;
    }

    // size of queue
    cout << "Size of queue: " << q.size() << endl;
    q.pop();
    cout << "Size of queue: " << q.size() << endl;

    // Pseudo Traversal
    queue<int> temp(q);

    while (!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    
    return 0;
}