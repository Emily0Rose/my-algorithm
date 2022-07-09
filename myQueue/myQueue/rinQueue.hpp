#ifndef rinQueue_hpp
#define rinQueue_hpp

#include <iostream>
#include <vector>
using namespace std;

class rinQueue {
private:
    int size;
    int front;
    int rear;
    vector<int> queue;
    
public:
    rinQueue();
    ~rinQueue();
    void inseart();
    void delete_elememt();
    void display();
};

#endif /* rinQueue_hpp */
