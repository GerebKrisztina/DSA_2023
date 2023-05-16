//
// Created by gereb on 4/25/2023.
//

#ifndef LISTAK_LISTAK_H
#define LISTAK_LISTAK_H

#include <stdlib.h>
#include <stdio.h>
#include <constants.h>
#include <stdbool.h>

typedef struct Node{
    int data;
    struct Node*
            next;
}Node;
Node *newNode(int new_data);
bool isEmpty(Node *head);
void insertAtEnd(Node** head_ref, int new_data);
void printList(Node* node);
void sortLinkedList(Node *head_ref);
void deleteFromBeginning(Node **head_ref);
void deleteFromEnd(Node **head_ref);
void deleteNode(Node** head_ref, int key);
bool searchNode(Node* head_ref, int key);
void orderedList(Node **head_ref, int new_data);

#endif //LISTAK_LISTAK_H
