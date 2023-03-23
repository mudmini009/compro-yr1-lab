//? implementation file
//? คือไฟล์ซอร์สโค้ดที่มีการกำหนดการใช้งานหรือเนื้อหาของคลาส ฟังก์ชัน หรือโครงสร้างข้อมูล
//? ประกอบด้วยคำจำกัดความของสมาชิกคลาส ฟังก์ชัน และตัวแปร และระบุลักษณะการทำงานและการโต้ตอบระหว่างกัน

//implement บอกว่าสิ่งที่มีอยู่ทำอะไรได้

#include "Node.h" //* ใช้ header นี้
#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std


//!The "Node::" before the function name is specifying that this constructor is part of the Node class.

Node::Node() //* default constructor
//วิธีใช้คือใช้แบบไม่ต้องใส่ค่า
{
     value = 0;
}
/*Node::Node(int newValue)
//ส่วนตรงนี้คือใส่ค่าไปเวลาใช้
{
    value = newValue;
}*/
Node::Node(int newValue, Node *newPrev, Node *newNext)
//ส่วนตรงนี้คือใส่ค่าไปเวลาใช้
{
    value = newValue;
    prev = newPrev;
    next = newNext;
}
void Node::print()
{
    cout << value ; 
}
int Node::getValue()
{
    return value;
}
void Node::setValue(int newValue)
{
    value = newValue;
}

Node* Node::getPrev()
{
    return prev;
}
void Node::setPrev(Node *newPrev)
{
    prev = newPrev;
}
Node* Node::getNext()
{
    return next;
}
void Node::setNext(Node *newNext)
{
    next = newNext;
}

//* เราสามารถ Run ใน implement ได้ แต่ควรไป run ใน main
/*
int main()
{
    Node xyz;
    xyz.setValue(0);
    cout << xyz.getValue() << endl;
    xyz.setValue(1);
    cout << xyz.getValue() << endl;
    return 0;
}
*/