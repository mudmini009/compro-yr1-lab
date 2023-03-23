//TODO ลองเขียน function callByValue และ callByReference
//TODO ตามตัวอย่างด้านบน และลองใช้งาน และแสดงผลค่าของตัวแปรเมื่อเข้า
//TODO function ผ่าน terminal

#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

//Function Changing Value in Number by Using Value (Call by Value)
void callByValue(int var){
    var = 100;
    //* ตอนแรกค่า var จะเป็น 1 เพราะรับมาจาก main แต่ว่าเมื่อ Function ทำงาน แล้ว ค่า var จะเป็น 100
    //* ส่วนนอกค่า var1 ก็จะเหมือนเดิมเป็นเหมือนเดิม
}

//Function Changing Value in Number by Using Pointer (Call By Reference)
void callByReference(int *var){
    *var = 200;
    //* ตอนแรกค่า var2 เป็น 2 เพราะประกาศมาแบบนี้ แต่ว่าตัวแปร var ในนี้จะใช้ memmory เดียวกับ var2
    //* ทำให้เมื่อเปลี่ยนค่าใน var แล้ว var2 จะเปลี่ยนด้วย
}

int main()
{
    int var1 = 1;
    int var2 = 2;
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    callByValue(var1);
    callByReference(&var2);
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    return 0;
}
