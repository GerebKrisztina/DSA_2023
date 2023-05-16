//
// Created by gereb on 5/9/2023.
//

#include "../headers/functions.h"

Node *newNode(char new_data) {
    Node *new_node = (Node *) malloc(sizeof(Node));
    if (!new_node) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
// insert the data
    new_node->data = new_data;
    new_node->next = NULL;
    return new_node;
}

bool isEmpty( *head) {
    return head == NULL;
}

void insertAtEnd(Node** head_ref, int new_data) {
    Node* new_node = newNode(new_data);
    Node* last = *head_ref;
    if (isEmpty(*head_ref)) {
        *head_ref = new_node;
        return;
    }
    while (last->next != NULL) last = last->next;
    last->next = new_node;
}

bool searchNode(Node* head_ref, char key) {
    Node* current = head_ref;
    while (current != NULL) {
        if (current->data == key) return
                    true;
        current = current->next;
    }
    return false;
}

void printList(Node* node) {
    while (node != NULL) {
        printf("%c ", node->data);
        node = node->next;
    }
}