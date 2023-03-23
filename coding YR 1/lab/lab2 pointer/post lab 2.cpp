//TODO ก็อปค่า array ไปอีกตัวโดยการใช้ pointer (void function)

#include <iostream> // input and output streams
using namespace std; //ไม่ต้องพิมพ์ std

void copyArray(int *x, int *y,int size){//สร้างเป็นตัวแปรประเภท pointer
    for (int i = 0; i < size ; i++)
    {
    y[i] = x[i];
    }
} 



int main()
{
    int var1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int var2[9] ;
    for (int i = 0; i < size(var1) - 1; i++) 
    {    
        cout << "var1 no " << i << " is " << var1[i]<<endl;

    }
        copyArray(var1, var2, size(var1));

    for (int i = 0; i < size(var1) - 1; i++)  
    {    
        cout << "var1 no " << i << " is " << var1[i] << " var2 no " << i << " is " << var2[i] <<endl;

    }
    return 0;
}