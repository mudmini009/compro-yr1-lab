//TODO สร้างฟังก์ชัน getter และ setter สำหรับตัวแปร next

//? getter และ setter เป็นชื่อมาตรฐานที่ใช้กันในสากล
//? getABC สำหรับรับค่า setABC สำหรับตั้งค่า

#include "Node.cpp"// ! ดึง class จากไฟล์ "node.h" มาใช้
#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

int main()
{
    Node xyz;
    Node abc;
    abc.setValue(9);
    xyz.setValue(0);
    cout << abc.getValue() << xyz.getValue() << endl;
    abc.setValue(0);
    xyz.setValue(9);
    cout << abc.getValue()  << xyz.getValue() << endl;
    return 0;
}

