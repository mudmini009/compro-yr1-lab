
//header บอกว่ามีอะไรบ้าง
//จะใส่รายละเอียดในนี้เลย หรือว่าไปใส่ใน implement แทนก็ได้

#ifndef NODE2_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้
#define NODE2_H //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้

class Node
//! A class defines a data structure, which contains data members (variables), and member functions (functions).
{
private:
/*
บอกว่าค่าตรงนี้ข้างนอกจะเข้าถึงไม่ได้
*/
    int value;
    Node *prev;
    Node *next;
public:
/*
ตรงนี้สามารถเข้าถึง และแก้ไขได้นอกคลาส
*/
//บอกว่ามีอะไรบ้าง
    Node();
    Node(int newValue, Node *newPrev, Node *newNext);
    Node* getNext();
    Node* getPrev();
    void print();
    int getValue();
    void setValue(int newValue);
    void setPrev(Node *newPrev);
    void setNext(Node *newNext);
};

#endif //* ใส่เพื่อให้สามารถเรียกใช้คลาสซ้ำกันได้