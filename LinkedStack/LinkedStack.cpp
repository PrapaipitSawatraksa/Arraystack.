#include "LinkedStack.h"
#include "../LinkedList/LinkedList.h"
#include <iostream>

using namespace std;
LinkedStack::LinkedStack(int maxSize):LinkedList(maxSize)
{
    this->maxSize=maxSize;
}

LinkedStack::~LinkedStack()
{
}

void LinkedStack::push(int e)
{
    add(size(), e); 
}

int LinkedStack::pop()
{
    return remove(size() - 1);
}

int LinkedStack::top()
{
    if (curSize == 0)
    {
        cerr << "Error !! Is empty." << endl;
    }
    return get(size()-1);
}

bool LinkedStack::Isempty()
{
    if (curSize < maxSize)
    {
        cout << "Is Empty" << endl;
        return true;
    }
    else
    {
        cout << "Is not Empty" << endl;
        return false;
    }
}

bool LinkedStack::IsFull()
{
    if (size() < maxSize)
    {
        cout<<"The stack is  not full "<<endl; 

    }
    else
    {
        cout<<"The stack is full "<<endl; 
    }
    return size() < maxSize;
}

void LinkedStack::Swap()
{
    int A = pop(); 
    int B = pop();
    push(A);
    push(B);
}
