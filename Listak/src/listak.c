//
// Created by gereb on 4/25/2023.
//

#include "../headers/listak.h"

Node *newNode(int new_data) {
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

bool isEmpty(Node *head) {
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
void printList(Node* node) {
    while (node != NULL) {
        printf("%4d ", node->data);
        node = node->next;
    }
}

void sortLinkedList(Node *head_ref) {
    Node *x, *y;
    x = head_ref;
    while (x->next != NULL) {
        y = x->next;
        while (y != NULL) {
            if (x->data > y->data) {
                int aux;
                aux = x->data;
                x->data = y->data;
                y->data = aux;
            }
            y = y->next;
        }
        x = x->next;
    }
}

    void deleteFromBeginning(Node **head_ref) {
        if(isEmpty(*head_ref)) {
            printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
            return;
        }
        Node *temp = *head_ref;
        *head_ref = (*head_ref)->next;
        free(temp);
    }

    void deleteFromEnd(Node **head_ref) {
        if(isEmpty(*head_ref)) {
            printf("NULL_POINTER_EXCEPTION_ERROR_MESSAGE");
            return;
        }
        Node* last = *head_ref, *prev;
        while (last->next != NULL)
        {
            prev = last;
            last = last->next;
        }
        prev->next = NULL;
        free(last);
    }

    void deleteNode(Node** head_ref, int key) {
        Node *temp = *head_ref, *prev;
        if (temp != NULL && temp->data == key) {
            *head_ref = temp->next;
            free(temp);
            return;
        }
// Find the key to be deleted
        while (temp != NULL && temp->data != key) {
            prev = temp;
            temp = temp->next;
        }
// If the key is not present
        if (temp == NULL) return;
// Remove the node
        prev->next = temp->next;
        free(temp);
    }

    bool searchNode(Node* head_ref, int key) {
        Node* current = head_ref;
        while (current != NULL) {
            if (current->data == key) return
                        true;
            current = current->next;
        }
        return false;
    }

void orderedList(Node **head_ref, int new_data) {
    Node *uj, *last, *prev;
    uj= newNode(new_data);
    if(*head_ref == NULL) {
        (*head_ref)=uj;
    }
    else if((*head_ref)->data=uj->data){
        uj->next=(*head_ref);
        (*head_ref)=uj;
    }
    else {
        last=(*head_ref);
        prev=NULL;
        while (last != NULL && last->data <= uj->data) {
            prev=last;
            last=last->next;
        }
        if(last == NULL) {
            prev->next=uj;
            last=uj;
        } else {
            prev->next=uj;
            uj->next=last;
        }
    }
}