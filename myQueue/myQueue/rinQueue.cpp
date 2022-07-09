#include "rinQueue.hpp"

rinQueue::rinQueue() {
    front = -1; rear = -1;
    cout << "Please set the size of this queue: ";
    cin >> size;
    queue.resize(size);
}

rinQueue::~rinQueue() {
    
}

void rinQueue::inseart() {
    if(rear == size - 1) {
        cout << "Overflow..." << endl;
        EXIT_FAILURE;
    }
    int val;
    cout << "Please input the value: ";
    cin >> val;
    if(front == -1) front = 0;
    rear++;
    queue[rear] = val;
    return;
}

void rinQueue::delete_elememt() {
    if(front == -1 || rear == -1) {
        cout << "Underflow..." << endl;
        EXIT_FAILURE;
    }
    front++;
    if(front > rear) {
        front = -1;
        rear = -1;
        queue.clear();
        queue.resize(size);
    }
    return;
}

void rinQueue::display() {
    if(front == -1 || rear == -1) {
        cout << "This queue is empty..." << endl;
        EXIT_FAILURE;
    }
    for(int i = front; i <= rear; i++) cout << queue[i]  << " ";
    cout << endl;
    return;
}
