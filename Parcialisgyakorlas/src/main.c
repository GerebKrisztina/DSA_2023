#include <stdio.h>
#include "binarytree.h"

int main() {
    //szamokkal
    /*Node *root;
    root=createNewNode(1);
    insertLeft(root, 2);
    insertRight(root, 3);
    insertRight(root->right, 10);
    insertLeft(root->right->right, 12);
    printf("\nA GY-B-J bejeras eredmenye: ");
    preorderTraversal(root);
    printf("\nA B-GY-J bejeras eredmenye: ");
    inorderTraversal(root);
    printf("\nA B-J-GY bejeras eredmenye: ");
    postorderTraversal(root);*/

    //betukkel
   /* Node *root;
    root=createNewNode('a');
    insertLeft(root, 'b');
    insertRight(root, 'c');
    insertRight(root->right, 'd');
    insertLeft(root->right->right, 'e');
    printf("\nA GY-B-J bejeras eredmenye: ");
    preorderTraversal(root);
    printf("\nA B-GY-J bejeras eredmenye: ");
    inorderTraversal(root);
    printf("\nA B-J-GY bejeras eredmenye: ");
    postorderTraversal(root); */


    //nevekkel
    /*Node *root;
    root=createNewNode("Krisztina");
    insertLeft(root, "Norbi");
    insertRight(root, "Attila");
    insertRight(root->right, "Gyopar");
    insertLeft(root->right->right, "Henrietta");
    printf("\nA GY-B-J bejeras eredmenye: ");
    preorderTraversal(root);
    printf("\nA B-GY-J bejeras eredmenye: ");
    inorderTraversal(root);
    printf("\nA B-J-GY bejeras eredmenye: ");
    postorderTraversal(root);*/

    //nevek es jegyek
    Node *root;
    Student seged={"Krisztina", 9.5};
    root=createNewNode(seged);
    Student seged1={"Norbi", 9.5};
    insertLeft(root, seged1);
    Student seged2={"Attila", 9.5};
    insertRight(root->right, seged2);
    Student seged4={"Henrietta", 9.5};
    insertLeft(root->right->right, seged4);
    printf("\nA GY-B-J bejeras eredmenye: ");
    preorderTraversal(root);
    printf("\nA B-GY-J bejeras eredmenye: ");
    inorderTraversal(root);
    printf("\nA B-J-GY bejeras eredmenye: ");
    postorderTraversal(root);


    return 0;
}
