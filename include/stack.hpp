#ifndef __STACK__
#define __STACK__

namespace stk
{
    template<class T>
    struct Node
    {
        T val;
        Node<T>* next;
        Node(T);
    };

    template<class T>
    Node<T>::Node(T new_val) : val(new_val), next(nullptr) {}

    template<class T>
    class Stack
    {
        private:
        Node<T>* head;

        public:
        Stack();
        void push(T);
        void pop();
        T top();
        bool is_empty();
        int size();
    };

    template<class T>
    Stack<T>::Stack() : head(nullptr) {}

    template<class T>
    void Stack<T>::push(T new_val)
    {
        if(head == NULL)
            head = new Node<T>(new_val);
        else
        {
            Node<T>* temp = new Node<T>(new_val);
            temp->next = head;
            head = temp;
        }
    }

    template<class T>
    void Stack<T>::pop()
    {
        if(head == NULL)
            return;
        else
        {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    template<class T>
    T Stack<T>::top()
    {
        return head->val;
    }

    template<class T>
    bool Stack<T>::is_empty()
    {
        if(head == NULL)
            return true;
        else
            return false;
    }

    template<class T>
    int Stack<T>::size()
    {
        int stack_size = 0;
        Node<T>* temp = head;
        while(temp != NULL)
        {
            stack_size++;
            temp = temp->next;
        }
        return stack_size;
    }

}
#endif