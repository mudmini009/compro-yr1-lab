#ifndef STACK_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้
#define STACK_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้

#include "Linkedlist2.h" //! เอาของ lab 3 มาใช้เลย
#include <iostream>

using namespace std;

class Stack: public LinkedList{
    public:
        Stack();
        ~Stack();//!deconstructor
        void push(Node *newNode);
        Node* pop();
        int peek();
        Node* peekNode();
};

#endif //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้