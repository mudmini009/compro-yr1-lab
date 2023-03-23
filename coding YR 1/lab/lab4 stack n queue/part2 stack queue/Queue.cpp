#include "Queue.h"

Queue::Queue():LinkedList()
{
    LinkedList();
}
Queue::~Queue()
{
}
void Queue::enqueue(Node *newNode)
{
    LinkedList::insert(newNode,-1);
}
Node* Queue::dequeue()
{
    Node* temp = LinkedList::getNodeHead();
    LinkedList::remove(0);
    return temp;
}
int Queue::peek()
{
    LinkedList::getHead();
}