//
// Created by gereb on 5/16/2023.
//

#include <string.h>
#include "../headers/binarytree.h"

Node *createNewNode(Student newData) {
    Node *newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }

    //newNode->info = newData;
    strcpy(newNode->info.name, newData.name);
    newNode->info.mark=newData.mark;
    newNode->right = NULL;
    return newNode;
}

Node *insertLeft(Node *root, Student newData) {
    root->left= createNewNode(newData);
    return root->left;
}

Node *insertRight(Node *root, Student newData) {
    root->right= createNewNode(newData);
    return root->right;
}

void preorderTraversal(Node *root) {
    if(root==NULL) return;
    printf("%s %.2f ",root->info.name, root->info.mark);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}

void inorderTraversal(Node *root) {
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%s %.2f ",root->info.name, root->info.mark);
    inorderTraversal(root->right);
}

void postorderTraversal(Node *root) {
    if(root==NULL) return;
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%s %.2f ",root->info.name, root->info.mark);
}