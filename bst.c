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

    int inserted = 0;
    int direction; //-1 -> went to left child | 1 -> went to right child

    TreeNode* curr; 
    TreeNode* parent = bst->root;

    if(node->value > bst->root->value){

        curr = bst->root->rightChild;
        direction = 1;

    } else if(node->value < bst->root->value){

        curr = bst->root->leftChild;
        direction = -1;

    }

    



    while(!inserted){

        if(curr == NULL){

            if(direction == 1){

                parent->rightChild = node;

            } else {

                parent->leftChild = node;

            }

            inserted = 1;

        } else {

            if(node->value > curr->value){

                
                parent = curr;
                curr = curr->rightChild;
                direction = 1;

            } else if(node->value < curr->value){

                parent = curr;
                curr = curr->leftChild;
                direction = -1;

            }

        }

        


    }

    

    


}

TreeNode* searchInBST(BST* bst, int value){

    

    if(isBSTEmpty(bst)){

        return NULL;

    }

    int found = 0;

    TreeNode* node = bst->root;

    while(!found){

        if(node == NULL){

            found = 1; //Node doesn't exists in the bst
        }

        if(node->value == value){

            found = 1;

        } else if(value > node->value){

            node = node->rightChild;

        } else if(value < node->value){

            node = node->leftChild;

        }

    }


    return node;

}

void freeBST(BST* bst){

    free(bst);

}