#ifndef myStack_hpp
#define myStack_hpp

#include <iostream>

class myStack {
private:
    int size;
    int top;
    int stack[];
    void setSize();
public:
    myStack();
    myStack(const myStack& st);
    ~myStack();
    void push();
    void pop();
    void peek();
    void display();
};

#endif /* myStack_hpp */
