#include <stdio.h>
#include <stdlib.h>

#ifndef _NODE_H_ //Prevent conflict problem in multiple include
#define _NODE_H_

typedef struct Node {

    int value;

    struct Node* next;

} Node;

Node* newNode(int value);

void freeNode(Node* node);

#endif 