//TODO ให้สร้างและใช้ pointer เพื่อเปลี่ยนค่าของ variable ใน Exercise 1 
//TODO และแสดงผลค่าของตัวแปรที่เปลี่ยนและ address ของ variable นั้น

#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

int var;//ตัวแปรที่จะรับค่า
int *ptr = NULL; //pointer to variable
int main()
{
    ptr = &var;
    cout << "Input the variable ";
    cin >> var;
    cout << "ค่าของตัวแปร คือ " << var << " ตำแหน่งของตัวแปร คือ " << ptr << endl;
    // !ตัวแปร pointer มี * คือบอกค่าของมัน แต่ถ้าไม่มี * คือ ตำแหน่งของมัน
    cout << "เปลี่ยนค่าตัวแปร เป็น  ";
    cin >> *ptr; // !มี * คือเปลี่ยนค่าที่ตำแหน่งของ pointer แต่ถ้าไม่มี * คือเปลี่ยนตำแหน่ง pointer
    cout << "ค่าของใหม่ตัวแปร คือ " << var << " ตำแหน่งของตัวแปร คือ " << ptr << endl;
}