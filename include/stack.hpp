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
        T pop();
        T peek();
        bool is_empty();
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
    T Stack<T>::pop()
    {
        Node<T>* temp = head;
        T temp_val = head->val;
        head = head->next;
        delete temp;
        return temp_val;
    }

    template<class T>
    T Stack<T>::peek()
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

}
#endif