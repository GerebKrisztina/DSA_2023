#include "functios_IntArray.h"

int main() {
    IntArray array;
    createIntArray(12, &array);
    instertFirst(&array, 1);
    instertFirst(&array, 2);
    instertFirst(&array, 3);
    instertFirst(&array, 4);
    insertLast(&array, 5);
    printArray(array);

    return 0;
}
