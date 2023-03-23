//?main file
#include "Stack.cpp"
#include "Queue.cpp"
#include "Linkedlist2.cpp"
#include "Node2.cpp"

int main()
{
    Node* A = new Node(0,NULL,NULL);
    Node* B = new Node(1,NULL,NULL);
    Node* C = new Node(2,NULL,NULL);
    Node* D = new Node(3,NULL,NULL);
    Node* E = new Node(4,NULL,NULL);
    Stack testStack;
    testStack.push(A);
    testStack.push(B);
    testStack.push(C);
    testStack.push(D);
    cout<<testStack.peek()<<endl;
    
    Queue testQueue;
    testQueue.enqueue(A);
    testQueue.enqueue(B);
    testQueue.enqueue(C);
    testQueue.enqueue(D);
    testQueue.listprint();
    testQueue.dequeue();
    testQueue.listprint();
    cout<<testQueue.peek()<<endl;
    



    return 0;
}