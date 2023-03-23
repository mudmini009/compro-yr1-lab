#include "Linkedlist.h" //* ใช้ header นี้
#include "Node.h"
#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

LinkedList::LinkedList()
{
    head = nullptr;
    tail = nullptr;
    size = 0;
}

void LinkedList::listprint()
{
    Node *temp = head;
    Node *temptail = tail;
    for (int i = 0; i < size; i++)
    {
        cout << "|" << temp->getValue() << temptail->getValue() << "|";
        temp = temp->getNext();
        temptail = temptail->getPrev();
        
    }
    cout << endl;

}

void LinkedList::insert(Node* newNode, int pos)
{
if ((size == 0)&&(head == nullptr)&&(tail == nullptr))//ถ้าเติมตอนไม่มีอะไร
{
    newNode -> setNext(NULL);
    head = newNode;
    tail = newNode;
}
if (pos == 0)//ใส่เข้าไปข้างหน้า
{
    newNode->setNext(head);//บอกตัวต่อไป
    head->setPrev(newNode);//บอกตัวก่อนหน้า
    head = newNode;

}
else if ((pos == size)||(pos == -1))//ใส่เข้าไปด้านหลัง
{   
    tail->setNext(newNode);
    newNode->setPrev(tail); //double
    tail = newNode;

}
else if ((pos != 0) && (pos != size))//put in between 
{
    Node *temp = head;
    Node *tempback = nullptr;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->getNext();
        tempback = temp->getNext();
    }
    //setPrev(temp);
    temp->setNext(newNode);
    newNode->setNext(tempback);
    tempback->setPrev(newNode);  
    newNode->setPrev(temp);    
}
size++; 
}


Node* LinkedList::remove(int pos)
{
    if (size == 0)//ถ้าว่างเปล่า
    {
        //do nothing
    }
    else if (pos == 0)// delete head
    {
        Node *temp = head;
        head = head->getNext();
        temp->setPrev(nullptr);//ให้มันไม่ชี้อะไรเลย
        temp->setNext(nullptr);
    }
    else if (pos == size-1)//ด้านหลัง
    {   
        Node *temp = tail;
        tail = tail->getPrev();
        temp->setPrev(nullptr);
        temp->setNext(nullptr); 
    }
    else if ((pos != 0) && (pos != size))//remove in between 
        {
    Node *temp = head;
    Node *tempnull = head;
    for (int i = 0; i < pos-1; i++)
    {
        temp = temp->getNext();
        tempnull = temp->getNext();
    }
    Node *tempback = temp->getNext();
    tempback = tempback->getNext();
    temp->setNext(tempback);
    tempback->setPrev(temp);
    tempnull->setPrev(nullptr);
    tempnull->setNext(nullptr);     
}
size--;
}

//TODO postlab remove center
void LinkedList::removecenter()
{
if (size<=2)//มี2ตัวลงไป
{
    if (size==2)
    {
    head->setPrev(nullptr);
    head->setNext(nullptr);
    tail->setNext(nullptr);
    tail->setPrev(nullptr);
    }
    head = nullptr;
    tail = nullptr;
    size = 0;
}
else if (size%2 != 0)//คี่
{
    Node *temp = head;
    Node *tempnull = head;
    for (int i = 0; i < ((size-1)/2)-1; i++)
    {
        temp = temp->getNext();
        tempnull = temp->getNext();
    }
    Node *tempback = temp->getNext();
    tempback = tempback->getNext();
    temp->setNext(tempback);
    tempback->setPrev(temp);
    tempnull->setPrev(nullptr);
    tempnull->setNext(nullptr);     
    size--; 
}
else//คู่
{
    Node *temp = head;
    for (int i = 0; i < ((size)/2)-2; i++)
    {
        temp = temp->getNext();
    }
    Node *tempback = temp->getNext();
    tempback = tempback->getNext();
    tempback = tempback->getNext();
    Node *tempnull1 = temp->getNext();
    Node *tempnull2 = tempnull1->getNext();
    temp->setNext(tempback);
    tempback->setPrev(temp);
    tempnull1->setPrev(nullptr);
    tempnull1->setNext(nullptr);     
    tempnull2->setPrev(nullptr);
    tempnull2->setNext(nullptr);     
    size-=2; 
}
}
int LinkedList::getHead()
{
    Node *temp = head;
    return temp->getValue();
}
int LinkedList::getTail()
{
    Node *temp = tail;
    return temp->getValue();

}
