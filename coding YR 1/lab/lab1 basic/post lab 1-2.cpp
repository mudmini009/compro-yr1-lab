/*
สร้างโปรแกรมช่วยพี่เนคำนวณตำแหน่งปลายทางของการเดินใน 2 มิติ โดยจะรับค่าคำสั่งเป็น
Array : [1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4]
กำหนดให้
เริ่มต้นที่ตำแหน่งแกน x = 0, y = 0
1 คือคำสั่งเดินไปข้างหน้า 1 หน่วย
2 คือคำสั่งเดินไปทางซ้าย 1 หน่วย
3 คือคำสั่งเดินไปข้างหลัง 1 หน่วย
4 คือคำสั่งเดินไปทางขวา 1 หน่วย
หากพี่เนกลับมาที่ตำแหน่งเริ่มต้น พี่เนจะวาร์ปไปยังตำแหน่งแกน x = 1, y = 1
*/
//TODO ใช้ while loop แทน for
#include <iostream>
using namespace std;
int pos[] = {0,0};
int direction[] = {1, 2, 1, 3, 1, 2, 2, 1, 3, 2, 4, 1, 2, 3, 1, 4, 1, 2, 1, 3, 1, 2, 1, 1, 4};
int main(){
    // with for
    /*for(int move: direction){
        switch (move)
        {
        case 1:
        pos[1]+=1;
        break;
        case 2:
        pos[0]-=1;
        break;
        case 3:
        pos[1]-=1;
        break;
        case 4:
        pos[0]+=1;
        break;
        }

        if (pos[0]==0 && pos[1]==0)
        {
            pos[0]=1;
            pos[1]=1;
        }


    }
    // try while loop*/
    int move=0;
    while (move < sizeof(direction)/sizeof(int))
    {
        switch (direction[move])
        {
        case 1:
        pos[1]+=1;
        break;
        case 2:
        pos[0]-=1;
        break;
        case 3:
        pos[1]-=1;
        break;
        case 4:
        pos[0]+=1;
        break;
        }

        if (pos[0]==0 && pos[1]==0)
        {
            pos[0]=1;
            pos[1]=1;
        }
    move++;
    }
    cout << "last position x " << pos[0] << ", last position y " << pos[1] << endl;
}