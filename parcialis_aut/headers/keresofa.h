//
// Created by gereb on 5/23/2023.
//

#ifndef PARCIALIS_AUT_KERESOFA_H
#define PARCIALIS_AUT_KERESOFA_H

typedef struct Node{
    char nev[20];
    struct Node *left, *right;
}Node;

Node *createNewNode(char newData[20]);
Node *insertLeft(Node *root, char newData[20]);
Node *insertRight(Node *root, char newData[20]);
void postorderTraversal(Node *root);
Node *insert(Node *node, int key);

#endif //PARCIALIS_AUT_KERESOFA_H
