#include <stdio.h>
#include <stdlib.h>

#include "node.h"

#ifndef _STACK_H_
#define _STACK_H_

typedef struct Stack {

    Node* top;

} Stack;

Stack* newStack();

int isStackEmpty(Stack* stack); 

void push(Stack* stack, Node* node);

Node* pop(Stack* stack);

void freeStack(Stack* stack);

void printStack(Stack* stack);

#endif