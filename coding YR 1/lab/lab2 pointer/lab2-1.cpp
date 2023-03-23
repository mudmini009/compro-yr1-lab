//TODO ลองสร้าง variable 1 ตัวขึ้นมาและแสดงค่าและ adress ของ variable นั้นบน terminal
//TODO จากนั้นลองเปลี่ยนค่าของ variable ตัวนั้นและแสดงค่าและ adress ของ variable บน terminal อีกครั้ง

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
    cout << "Input the variable ";
    cin >> var;
    cout << "ค่าของตัวแปร คือ " << var << " ตำแหน่งของตัวแปร คือ " << ptr << endl;
    // !ตัวแปร pointer มี * คือบอกค่าของมัน แต่ถ้าไม่มี * คือ ตำแหน่งของมัน
}
    