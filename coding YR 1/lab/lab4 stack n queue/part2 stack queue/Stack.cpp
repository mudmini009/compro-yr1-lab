#include "Stack.h"

Stack::Stack():LinkedList()
{
    LinkedList();
}
Stack::~Stack()
{
}
void Stack::push(Node *newNode)
{
    LinkedList::insert(newNode,0);
}
Node* Stack::pop()
{
    Node* temp = LinkedList::getNodeHead();
    LinkedList::remove(0);
    return temp;
}
int Stack::peek()
{
    LinkedList::getHead();
}
Node* Stack::peekNode()
{
    LinkedList::getNodeHead();
}
