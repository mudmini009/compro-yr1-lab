//TODO เขียน function (function ประเภท void) สำหรับการสลับค่าระหว่าง
//TODO 2 variables (variable ประเภท int) โดยใช้คุณสมบัติของ pointer

#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

void swapFunction(int *x, int *y){//สร้างเป็นตัวแปรประเภท pointer
    swap(*x,*y); // ฟังก็ชันสำหรับสลับค่า    
    /*
    !เนื่องจาก x ใช้ memmory เดียวกับ var1 แลพ y ใช้ memmory เดียวกับ var2
    ทำให้เมื่อสลับค่าของ x และ y แล้ว ค่าของ var 1 var 2 จะสลับกันด้วย
    */
}

int main()
{
    int var1 = 1;
    int var2 = 2;
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    swapFunction(&var1, &var2);
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    return 0;
}