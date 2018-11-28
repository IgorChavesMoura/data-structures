#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "stack.h"
#include "queue.h"


int main(int argc, char** argv){
    

    Node* node1 = newNode(1);
    Node* node2 = newNode(2);
    Node* node3 = newNode(3);

    Node* node4 = newNode(4);
    Node* node5 = newNode(5);
    Node* node6 = newNode(6);

    Queue* queue = newQueue();
    Stack* stack = newStack();



    push_back(queue,node1);
    push_back(queue,node2);
    push_back(queue,node3);

    push(stack,node4);
    push(stack,node5);
    push(stack,node6);



    printStack(stack);

    printQueue(queue);

    freeStack(stack);

    freeQueue(queue);

    freeNode(node1);
    freeNode(node2);
    freeNode(node3);
    freeNode(node4);
    freeNode(node5);
    freeNode(node6);



    return EXIT_SUCCESS;
}
