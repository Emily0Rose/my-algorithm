#include "myStack.hpp"

myStack::myStack() {
    setSize();
    top = -1;
}

myStack::myStack(const myStack& st) {
    size = st.size;
    top = st.top;
    if(top != -1) {
        for(int i = 0; i <= top; i++) stack[i] = st.stack[i];
    }
}
        
myStack::~myStack() {
    
}
        
void myStack::setSize() {
    std::cout << "Please set the size of this stack: ";
    std::cin >> size;
    std::cout << std::endl;
    return;
}
        
void myStack::push() {
    if(top == size-1) std::cout << "Stack Overflow..." << std::endl;
    else {
        int val;
        std::cout << "Please enter the value: ";
        std::cin >> val;
        std::cout << std::endl;
        top++;
        stack[top] = val;
    }
}

void myStack::pop() {
    if(top == -1) std::cout << "Stack Underflow..." << std::endl;
    else top--;
    return;
}

void myStack::peek() {
    if(top == -1) std::cout << "Stack is empty..." << std::endl;
    else std::cout << stack[top] << std::endl;
    return;
}

void myStack::display() {
    if(top == -1) std::cout << "Stack is empty..." << std::endl;
    for(int i = 0; i <= top; i++) std::cout << stack[i] << " ";
    std::cout << std::endl;
    return;
}
