//
// Created by gereb on 5/16/2023.
//

#ifndef PARCIALISGYAKORLAS_BINARYTREE_H
#define PARCIALISGYAKORLAS_BINARYTREE_H
#include <stdlib.h>
#include <stdio.h>
#include <constants.h>
typedef struct Student{
    char name[15];
    float mark;
}Student;

typedef struct Node{
    Student info;
    struct Node *left, *right;
}Node;

//create a new node
Node *createNewNode(Student newData);
//insert on the left of the node
Node *insertLeft(Node *root, Student newData);
//insert on the right of the node
Node *insertRight(Node *root, Student newData);
//preorder traversal
void preorderTraversal(Node *root);
//inorder traversal
void inorderTraversal(Node *root);
//postorder traversal
void postorderTraversal(Node *root);

#endif //PARCIALISGYAKORLAS_BINARYTREE_H
