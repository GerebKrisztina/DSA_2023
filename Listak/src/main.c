#include "listak.h"

int main() {
    Node *head=NULL;
    int x=2003;
    while(x!=0)
    {
        int szj=x%10;
        insertAtEnd(&head, szj);
        x = x/10;
    }
    printf("\nRendezes elott: ");
    printList(head);
    sortLinkedList(head);
    printf("\nRendezes utan: ");
    printList(head);
    return 0;
}
