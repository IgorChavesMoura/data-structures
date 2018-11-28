#include <stdio.h>
#include <stdlib.h>

#include "node.h"
#include "stack.h"
#include "queue.h"
#include "bst.h"


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


    TreeNode* tnode1 = newTreeNode(1);
    TreeNode* tnode2 = newTreeNode(2);
    TreeNode* tnode3 = newTreeNode(3);
    TreeNode* tnode4 = newTreeNode(4);
    TreeNode* tnode5 = newTreeNode(5);
    TreeNode* tnode6 = newTreeNode(6);
    TreeNode* tnode7 = newTreeNode(7);

    BST* bst = newBST();

    insertInBST(bst,tnode1);
    insertInBST(bst,tnode2);
    insertInBST(bst,tnode3);
    insertInBST(bst,tnode4);
    insertInBST(bst,tnode5);
    insertInBST(bst,tnode6);
    insertInBST(bst,tnode7);

    freeBST(bst);

    freeTreeNode(tnode1);
    freeTreeNode(tnode2);
    freeTreeNode(tnode3);
    freeTreeNode(tnode4);
    freeTreeNode(tnode5);
    freeTreeNode(tnode6);
    freeTreeNode(tnode7);
    

    return EXIT_SUCCESS;
}
