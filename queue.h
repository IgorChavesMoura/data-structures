#include <stdio.h>
#include <stdlib.h>

#include "node.h"

#ifndef _QUEUE_H_
#define _QUEUE_H_

typedef struct Queue {

    Node* first;

    Node* last;

} Queue;

Queue* newQueue();

int isQueueEmpty(Queue* queue);

void push_back(Queue* queue, Node* node);

Node* poll(Queue* queue);

void freeQueue(Queue* queue);

void printQueue(Queue* queue);

#endif