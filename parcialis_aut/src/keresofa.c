//
// Created by gereb on 5/23/2023.
//

#include <malloc.h>
#include <stdio.h>
#include <string.h>
#include "../headers/keresofa.h"
#include "constants.h"

Node *createNewNode(char newData[20]) {
    Node *newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    strcpy(newNode->nev, newData.nev);
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
Node *insertLeft(Node *root, char newData[]) {
    root->left= createNewNode(newData);
    return root->left;
}
Node *insertRight(Node *root, char newData[]) {
    root->right= createNewNode(newData);
    return root->right;
}
void postorderTraversal(Node *root) {
    if(root==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%i ",root->nev);
}
Node *insert(Node *node, int key) {
//if the tree is empty
    if(node==NULL)
        return createNewNode(key);
//find the right place and insert the node
    if(key<node->nev)
        node->left=insert(node->left, key);
    else
        node->right=insert(node->right,key);
    return node;
}
