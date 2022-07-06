#include "myStack.hpp"

int main() {
    
    myStack st0;
    
    st0.push();
    st0.push();
    st0.push();
    
    std::cout << "st0: ";
    st0.display();
    st0.peek();
    
    myStack st1 = st0;
    
    std::cout << "st1: ";
    st1.display();
    st1.peek();
    
    st0.pop();
    
    std::cout << "st0: ";
    st0.display();
    std::cout << "st1: ";
    st1.display();
    
    return 0;
}
