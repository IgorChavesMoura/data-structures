#include "node.h"


Node* newNode(int value){

    Node* node = (Node*)malloc(sizeof(Node));

    node->value = value;

    return node;

}


void freeNode(Node* node){

	free(node);

}