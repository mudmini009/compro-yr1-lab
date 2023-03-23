//TODO ทำฟังก์ชั่น Linked List ให้สามารถใช้งานได้ถูกต้องครบถ้วน
//TODO โดยพี่ ๆ จะเข้าไปตรวจการทำงานแต่ละฟังก์ชั่น

#include "Node.cpp"// ! ดึง class จากไฟล์ "node.h" มาใช้
#include "Linkedlist.cpp" // ! ดึง class จากไฟล์ "Linkedlist.h" มาใช้
//include .cpp ทำให้สามารถกด run ได้โดยไม่ผ่าน terminal
#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

int main()
{
    Node* A = new Node(0,NULL,NULL);
    Node* B = new Node(1,NULL,NULL);
    Node* C = new Node(2,NULL,NULL);
    Node* D = new Node(3,NULL,NULL);
    Node* E = new Node(4,NULL,NULL);
    LinkedList list = LinkedList();
    list.insert(B,0);
    list.insert(A,0);
    list.insert(D,2);
    list.insert(E,3);
    list.listprint();
    list.insert(C,2);
    list.listprint();
    cout << list.getHead() << endl;
    /*
    list.remove(0);
    list.remove(3);
    list.listprint();
    list.remove(1);
    list.listprint();
    */
    list.removecenter();
    list.listprint();

    list.removecenter();
    list.listprint();

    list.removecenter();
    list.listprint();
    
    
}