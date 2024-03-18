#ifndef _LINKEDSTACK_H_
#define _LINKEDSTACK_H_
#include "../LinkedList/LinkedList.h"

class LinkedStack : public LinkedList 
{
private : int maxSize;
public : 
LinkedStack(int maxSize);
~LinkedStack();

void push (int e);
int pop();
int top();
bool Isempty();
bool IsFull();
void Swap();
};

#endif // _LINKEDLIST_H_ 

