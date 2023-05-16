//
// Created by gereb on 5/9/2023.
//

#ifndef FAK_FAK_H
#define FAK_FAK_H

#include <malloc.h>

typedef struct Date{
    int year,month, day;
};

typedef struct Person{
    char num[30];
    Date birthdate;
    int gender;
}Person;

typedef struct Node{
    Person info;
    struct Node *left, *right;
}Node;

Node *createNewNode(int newData) {
    Node *newNode = malloc(sizeof(Node));
    if (!newNode) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
    newNode->info = newData;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

Node *insert(Node *node, Person key) {
//if the tree is empty
    if(node==NULL)
        return createNewNode(key);
//find the right place and insert the node
    if(key.num, node->info.num<0)
        node->left=insert(node->left, key);
    else
        node->right=insert(node->right,key);
    return node;
}

void inorderTraversal(Node *root) {
    if(root==NULL) return;
    inorderTraversal(root->left);
    printf("%i ",root->info);
    inorderTraversal(root->right);
}

#endif //FAK_FAK_H
