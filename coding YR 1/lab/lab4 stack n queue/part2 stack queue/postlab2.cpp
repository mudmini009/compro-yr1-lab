
#include "Stack.cpp"
#include "Queue.cpp"
#include "Linkedlist2.cpp"
#include "Node2.cpp"

Queue row1;
Queue row2;
Queue row3;

int main()
{
    int rowstart[] = {5,6,8,9,2,7,1};
    for (int i : rowstart)
    {
        row1.enqueue(new Node(i,NULL,NULL));
    }
    row1.listprint();
    for (int i : rowstart)
    {   
        if(row1.peek()%2==0)
        {
            Node* tempNode = row1.dequeue();
            row2.enqueue(tempNode);
        }
        else
        {
            Node* tempNode = row1.dequeue();
            row3.enqueue(tempNode); 
        }
        if ((row2.size != 0)&&(row3.size != 0))
        {
            if (row2.peek()>row3.peek())
            {
                Node* tempNode = row2.dequeue();
                row2.enqueue(tempNode);
            }
            else
            {
                Node* tempNode = row3.dequeue();
                row3.enqueue(tempNode);
            }
        }
        row1.listprint();
        row2.listprint();
        row3.listprint();
        cout<<endl;
    }
    return 0;
}