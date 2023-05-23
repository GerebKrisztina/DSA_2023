#include <stdio.h>
#include "keresofa.h"

int main() {
    Node *root;
    root=createNewNode("Tudor");
    insertLeft(root, "Vidor");
    insertRight(root, "Morgo");
    insertLeft(root->left->left, "Kuka");
    insertLeft(root->left->left->right, "Szende");
    insertLeft(root->right->right, "Szundi");
    insertLeft(root->right->right->right, "Hapci");


    return 0;
}
