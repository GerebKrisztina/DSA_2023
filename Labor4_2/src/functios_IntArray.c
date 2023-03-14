//
// Created by gereb on 3/14/2023.
//

#include "../headers/functios_IntArray.h"

void createIntArray(int capacity, IntArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements =(int*) calloc(capacity,sizeof(int));
    if (!pArray->elements) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

bool isEmpty(IntArray array){
    return array.size == 0;
}

bool isFull(IntArray array) {
    return array.size == array.capacity;
}


void printArray(IntArray array) {
    if (isEmpty(array)) {
        printf("Array is empty");
        return;
    }
    printf("The elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printf("%i ", array.elements[i]);
    }
    printf("\n");
}

int getItemAt(IntArray array, int position){

}


void insertFirst(IntArray* pArray, int item) {
    if (isFull(*pArray)) return;
    printf("Array is full"); return 0;
//shifting the rest of the elements downwards
    for (int i = pArray->size-1; i >= 0; --i) {
        pArray->elements[i+1] = pArray->elements[i];
    }
    pArray->elements[0] = item;
    pArray->size++;
}

void insertLast(IntArray* pArray, int item) {
    if (isFull(*pArray)) return;
    pArray->elements[pArray->size++] = item;
}


void deallocateIntArray(IntArray *pArray) {
    free(pArray->elements);
    pArray->elements = NULL;
    pArray = NULL;
}
