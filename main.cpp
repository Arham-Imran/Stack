#include <iostream>
#include "stack.hpp"

int main()
{
    vtrstk::Stack<int> stack;
    stack.push(1);
    stack.pop();
    std::cout << "Stack Empty: " << stack.is_empty() << std::endl;
    stack.push(65);
    std::cout << "Stack Top: " << stack.top() << std::endl;
    for(int i=0; i<10; i++)
    {
        stack.push(i);
    }
    std::cout << "Stack Empty: " << stack.is_empty() << std::endl;
    for(int i=0; i<11; i++)
    {
        std::cout << stack.top() << " ";
        stack.pop();
        std::cout << stack.size() << std::endl;
    }
    std::cout << "Stack Empty: " << stack.is_empty() << std::endl;
    std::cout << stack.top() << " ";
}
