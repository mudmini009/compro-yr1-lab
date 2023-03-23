#ifndef LINKEDLIST_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้
#define LINKEDLIST_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้

#include "Node.h" //! ดึงจาก node.h มาใช้

class LinkedList
{
    private:
        Node *head;
        Node *tail;
        int size;
    public:
        LinkedList();
        void insert(Node *newNode,int pos);
        Node *remove(int pos);
        void listprint();
        void removecenter();
        int getHead();
        int getTail();
};
#endif //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้