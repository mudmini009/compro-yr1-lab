//TODO เขียน function (function ประเภท tuple) สำหรับการสลับค่า
//TODO ระหว่าง 2 variables (variable ประเภท int) และ return ค่าใหม่ออกมา

#include <iostream> // input and output streams
#include <tuple> //! tuple คือ array ที่สามารถเก็บข้อมูลได้หลาย ๆ แบบ
using namespace std; //ไม่ต้องพิมพ์ std

tuple<int , int> tupleFunction(int x,int y) //! ระบุ tuple ด้านหน้า เพื่อที่จะได้บอกว่า มันจะ return เป็น tuple
{
    return make_tuple(y, x); //! make tuple คือการสร้าง tuple (ในที่นี้คือให้มันส่งค่าที่เป็น tuple ออกไป)
}


int main()
{
    int var1 = 1;
    int var2 = 2;
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    tie(var1,var2) = tupleFunction(var1,var2); //! tie คือตัวแปรที่จะแยกค่าจาก tuple ให้เป็นแต่ละตัวแปรได้
    cout << "var1 = " << var1 << " var2 = " << var2 << endl;
    return 0;
}