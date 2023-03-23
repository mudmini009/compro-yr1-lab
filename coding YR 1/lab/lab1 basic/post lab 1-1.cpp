/*
สร้างโปรแกรมที่ช่วยให้พี่ปุ้นคำนวณค่าข้าวทั้งหมดใน 1 เดือน
โดยพี่ปุ้นจะกินข้าวแพงขึ้น 1.2 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคู่
และถูกลง 0.8 เท่าจากวันล่าสุดที่กินข้าวหากเป็นวันคี่่
และทุกๆวันที่ 15 พี่ปุ้นจะอดข้าวเพื่อเก็บเงินไว้กินกุ้งเผา
กำหนดให้
1 เดือนมี 30 วัน
เริ่มต้นวันจากวันที่ 1
*/
//TODO ใช้ if else แทน Switch
#include <iostream>
using namespace std;

float foodprice=0,pay=0;

int main(void)
{
    cout<<"ค่าข้าวราคาจานละ ";
    cin>> foodprice;
    for (int day = 1; day <=30; day++)
    {
        // using switch
        /*switch (day%2)
        {
        case 0:
        foodprice = foodprice * 1.2;
        pay += foodprice;
            break;
        case 1:
        if (day != 15)
        {
            foodprice = foodprice * 0.8;
            pay += foodprice;
        }
            break;
        }*/
        //Try if else
        if (day%2 == 0){
            foodprice = foodprice * 1.2;
            pay += foodprice;
        }
        else
        {
            if (day != 15)
            {
            foodprice = foodprice * 0.8;
            pay += foodprice;
            }  
        }
            
        
    }
    cout << "พี่ปุ้นต้องจ่ายเงิน" << pay << "บาท" << endl;
}