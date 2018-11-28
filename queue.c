#include "queue.h"

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

void push_back(Queue* queue, Node* node){

    if(queue->last == NULL){

        queue->first = node;
        queue->last = node;

        return;
    }

    queue->last->next = node;
    queue->last = node;

}

Node* poll(Queue* queue){

    Node* curr = queue->first;


    queue->first = curr->next;

    return curr;

}

void freeQueue(Queue* queue){

    free(queue);

}


void printQueue(Queue* queue){

    printf("\n\n\n");

    Node* curr = queue->first;

    while(curr != NULL){

        printf("[%d]", curr->value);

        if(curr->next != NULL){

            printf(" \u2190 ");
        }

        curr = curr->next;

    }

    printf("\n\n\n");

}