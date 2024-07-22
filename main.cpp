#include <iostream>
#include "stack.hpp"

int main()
{
    stk::Stack<int> stack;
    stack.push(1);
    int val = stack.pop();
    std::cout << val << std::endl;
    std::cout << "Stack Empty: " << stack.is_empty() << std::endl;
    stack.push(65);
    std::cout << "Stack Top: " << stack.peek() << std::endl;
    for(int i=0; i<10; i++)
    {
        stack.push(i);
    }
    std::cout << "Stack Empty: " << stack.is_empty() << std::endl;
    for(int i=0; i<11; i++)
    {
        std::cout << stack.pop() << " ";
    }
}
