#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int value;

    struct Node* next;

} Node;


typedef struct Stack {

    Node* top;

} Stack;

typedef struct Queue {

    Node* first;

} Queue;




Stack* newStack();

int isStackEmpty(Stack* stack); 

void push(Stack* stack, Node* node);

Node* pop(Stack* stack);

void freeStack(Stack* stack);


Queue* newQueue();

int isQueueEmpty(Queue* queue);

void queue(Queue* queue, Node* node);

Node* poll(Queue* queue);

void freeQueue(Queue* queue);





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


Queue* newQueue(){

    Queue* queue = (Queue*)malloc(sizeof(Queue));

    return queue;

}

int isQueueEmpty(Queue* queue){

    if(queue->first == NULL){

        return 1;

    }

    return 0;

}

void queue(Queue* queue, Node* node);

Node* poll(Queue* queue);

void freeQueue(Queue* queue);


int main(int argc, char const *argv[]){
    


    return EXIT_SUCCESS;
}
