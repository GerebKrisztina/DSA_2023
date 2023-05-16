//
// Created by gereb on 5/9/2023.
//

#ifndef GYAKORLAS_PARCIALISRA_FUNCTIONS_H
#define GYAKORLAS_PARCIALISRA_FUNCTIONS_H
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "constants.h"
#include <string.h>

typedef struct Node{
    char data;
    struct Node*
            next;
}Node;

Node *newNode(char new_data);
bool isEmpty(Node *head);
void insertAtEnd(Node** head_ref, int new_data);
bool searchNode(Node* head_ref, char key);
void printList(Node* node);

#endif //GYAKORLAS_PARCIALISRA_FUNCTIONS_H
