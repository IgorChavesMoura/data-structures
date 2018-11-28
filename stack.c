#include "stack.h"


Stack* newStack(){

    Stack* stack = (Stack*)malloc(sizeof(Stack));

    return stack;

}

int isStackEmpty(Stack* stack){

    if(stack->top == NULL){

        return 1;

    }

    return 0;
}

void push(Stack* stack, Node* node){

    if(isStackEmpty(stack)){

        stack->top = node;
        return;
    
    }

    Node* curr = stack->top;

    stack->top = node;
    
    node->next = curr;

    
}

Node* pop(Stack* stack){

    if(isStackEmpty(stack)){

        return NULL;

    }

    Node* curr = stack->top;

    stack->top = curr->next;

    return NULL; 

}

void freeStack(Stack* stack){

    free(stack);

}

void printStack(Stack* stack){

    printf("\n\n\n");

    Node* curr = stack->top;

    while(curr != NULL){

        printf("[%d]\n", curr->value);

        curr = curr->next;
    }

    printf("\n\n\n");

}