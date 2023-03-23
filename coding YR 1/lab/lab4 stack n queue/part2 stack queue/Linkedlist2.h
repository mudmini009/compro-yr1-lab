#ifndef LINKEDLIST2_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้
#define LINKEDLIST2_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้

#include "Node2.h" //! ดึงจาก node.h มาใช้

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        //int size;
    public:
        int size;
        LinkedList();
        void insert(Node *newNode,int pos);
        Node *remove(int pos);
        void listprint();
        void removecenter();
        int getHead();
        Node* getNodeHead();
        int getTail();
};
#endif //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้