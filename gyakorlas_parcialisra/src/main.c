#include "functions.h"


int main() {
    Node *head=NULL;
    char x[]="Emma"; char mgh[]="aeiouAEIOU";
    for(int i=0; i<strlen(x); i++) {
        if(strchr(mgh, x[i]))
            insertAtEnd(&head, x[i]);
    }
    if(searchNode(head,"o"))
        printf("Az o szerepel a listaban");
    else
        printf("Az o nem szrepel a listaban");
    printf("\n")

    return 0;
}
