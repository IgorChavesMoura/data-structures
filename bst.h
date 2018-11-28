#include <stdio.h>
#include <stdlib.h>

#ifndef _BST_H_
#define _BST_H_

typedef struct TreeNode {

    int value; 

    (struct TreeNode)* leftChild;
    (struct TreeNode)* rightChild;



} TreeNode;

typedef struct BST {

    TreeNode* root;

} BST;

TreeNode* newTreeNode(int value); 

void freeTreeNode(TreeNode* node);

BST* newBST();

int isBSTEmpty(BST* bst);

void insertInBST(BST* bst, TreeNode* node);

TreeNode* searchInBST(BST* bst, int value);

TreeNode* deleteFromBST(BST* bst, int value);

void freeBST(BST* bst);



#endif