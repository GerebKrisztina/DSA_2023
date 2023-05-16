#include "fak.h"

int main() {
    Node *root=NULL;
    int n;
    freopen("adatok.txt", "r",stdin);
    for(int i=1; i<n; i++) {
        Person seged;
        scanf("%s%i%i" seged.num, &seged.birthdate.year, &seged.birthdate.month, &seged.birthdate.day, &seged.gender);
        root=insert(&root, seged);
        printf("hiba");
    }
    inorderTraversal(root);
}
