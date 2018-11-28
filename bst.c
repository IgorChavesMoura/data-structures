#include "bst.h"

TreeNode* newTreeNode(int value){

    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));

    node->value = value;

    return node;

}

void freeTreeNode(TreeNode* node){

    free(node);

}

BST* newBST(){

    BST* bst = (BST*)malloc(sizeof(BST));

    return bst;

}

int isBSTEmpty(BST* bst){

    if(bst->root == NULL){

        return 1;

    }

    return 0;

}

void insertInBST(BST* bst, TreeNode* node){

    if(isBSTEmpty(bst)){

        bst->root = node;
        
        return;

    }

    

    


}

TreeNode* searchInBST(BST* bst, int value);