//TODO มีกองการ์ดกองหนึ่ง ประกอบไปด้วยการ์ดเลข 0 - 9 ค่อยๆหยิบการ์ดทีละใบออกจากกอง
//TODO โดยหากการ์ดที่หยิบไม่ใช่เลข 0 ก็จะเอาการ์ดไปกองเป็นอีกกองหนึ่งโดยจะวางซ้อนกันขึ้นไปเรื่อยๆ
//TODO แต่หากเจอเลข 0 จะนำการ์ดใบบนสุดออกมาก่อน แล้วจะใส่ 0 ลงไปตามด้วยการ์ดใบที่เพิ่งหยิบออกมา
//TODO เมื่อหยิบการ์ดออกจนหมดกอง ให้แสดงค่าหมายเลขของการ์ดกองใหม่จากบนสุดไปล่างสุด

#include "Stack.cpp"
#include "Queue.cpp"
#include "Linkedlist2.cpp"
#include "Node2.cpp"

Stack cardStack;

int main()
{
    int card[] = {1,2,3,0,4,5};
    for (int cardOrd : card)
    {
        Node* prevCard = cardStack.peekNode();
        cardStack.push(new Node(cardOrd,NULL,NULL));
        if ((cardStack.size == 1)&&(cardStack.peek() == 0))
        {
            cout<<"error cannot get previous card"<<endl;
            return 0;   
        }
        if (cardStack.peek()==0)
        {
            Node* temp = cardStack.pop();
            cardStack.pop();
            cardStack.push(temp);
            cardStack.push(prevCard);
        }
        
        cardStack.listprint();
    }   
    return 0; 
}