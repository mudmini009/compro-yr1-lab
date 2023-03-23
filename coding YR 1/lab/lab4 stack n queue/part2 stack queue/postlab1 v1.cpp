//TODO มีกองการ์ดกองหนึ่ง ประกอบไปด้วยการ์ดเลข 0 - 9 ค่อยๆหยิบการ์ดทีละใบออกจากกอง
//TODO โดยหากการ์ดที่หยิบไม่ใช่เลข 0 ก็จะเอาการ์ดไปกองเป็นอีกกองหนึ่งโดยจะวางซ้อนกันขึ้นไปเรื่อยๆ
//TODO แต่หากเจอเลข 0 จะนำการ์ดใบบนสุดออกมาก่อน แล้วจะใส่ 0 ลงไปตามด้วยการ์ดใบที่เพิ่งหยิบออกมา
//TODO เมื่อหยิบการ์ดออกจนหมดกอง ให้แสดงค่าหมายเลขของการ์ดกองใหม่จากบนสุดไปล่างสุด

#include "Stack.cpp"
#include "Queue.cpp"
#include "Linkedlist2.cpp"
#include "Node2.cpp"

Node* card0 = new Node(0,NULL,NULL);
Node* card1 = new Node(1,NULL,NULL);
Node* card2 = new Node(2,NULL,NULL);
Node* card3 = new Node(3,NULL,NULL);
Node* card4 = new Node(4,NULL,NULL);
Node* card5 = new Node(5,NULL,NULL);
Node* card6 = new Node(6,NULL,NULL);
Node* card7 = new Node(7,NULL,NULL);
Node* card8 = new Node(8,NULL,NULL);
Node* card9 = new Node(9,NULL,NULL);
Stack cardStack;

int main()
{
    int card[] = {1,2,3,0,4,5};
    bool prevZero = false;
    int i,cardord=0;
    while (cardord < sizeof(card)/sizeof(int))
    {
        i = cardord-2;
        if(prevZero==false)
        {
            i+=2;
            cardord++; 
        }
        if (i<0)
        {
            cout<<"error cannot get previous card"<<endl;
            return 0;    
        }
        switch (card[i])
        {
        case 0:
            cardStack.pop();
            cardStack.push(card0);
            break;
        case 1:
            cardStack.push(card1);
            break;
        case 2:
            cardStack.push(card2);
            break;
        case 3:
            cardStack.push(card3);
            break;
        case 4:
            cardStack.push(card4);
            break;
        case 5:
            cardStack.push(card5);
            break;
        case 6:
            cardStack.push(card6);
            break;
        case 7:
            cardStack.push(card7);
            break;
        case 8:
            cardStack.push(card7);
            break;
        case 9:
            cardStack.push(card7);
            break;
        }
        if(cardStack.peek() == 0)
        {
           prevZero=true; 
        }
        else
        {
            prevZero=false;
        }
        cardStack.listprint();
    }   
    return 0; 
}