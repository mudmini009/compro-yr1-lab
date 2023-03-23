#ifndef QUEUE_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้
#define QUEUE_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้

#include "Linkedlist2.h" //! เอาของ lab 3 มาใช้เลย
#include <iostream>

using namespace std;

class Queue: public LinkedList{
    public:
        Queue();
        ~Queue();//!deconstructor
        void enqueue(Node *newNode);
        Node* dequeue();
        int peek();
};

#endif //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้