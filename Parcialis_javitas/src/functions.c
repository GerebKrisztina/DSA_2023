//
// Created by gereb on 4/24/2023.
//

#include "../headers/functions.h"

char *getTypeDescription(enum Type type) {
    switch(type){
        case 0:
            return "NEM";
        case 1:
            return "IGEN";
        default:
            return "ERROR";
    }
}

void readCountryDetails(Country_t *pCountry) {
    scanf("%[^\n]\n", pCountry->name);
    scanf("%f\n", &pCountry->area);
    scanf("%i\n", &pCountry->type);

}

void printCountryDetails(Country_t country) {
    printf("\nName: %s,", country.name);
    printf(" Area: %.2f,", country.area);
    printf(" Europai: %s", getTypeDescription(country.type));

}


void createArray(int capacity, CountryArray *pArray) {
    pArray->capacity = capacity;
    pArray->size = 0;
    pArray->elements = (Country_t *) calloc(capacity, sizeof(Country_t));
    if (!pArray->elements) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

bool isEmpty(CountryArray array) {
    return array.size == 0;
}

bool isFull(CountryArray array) {
    return array.size == array.capacity;
}

void printArray(CountryArray array) {
    if (isEmpty(array)) {
        printf("ARRAY_EMPTY_MESSAGE");
        return;
    }
    printf("The elements of the array: ");
    for (int i = 0; i < array.size; ++i) {
        printCountryDetails(array.elements[i]);
    }
    printf("\n");
}

Country_t getItemAt(CountryArray array, int position) {
    if(isEmpty(array)) {
        printf(FILE_OPEN_MESSAGE);
    }
    if ((position < 0 || position >= array.size)) {
        printf(FILE_OPEN_MESSAGE);
    }
    return array.elements[position];
}

void insertFirst(CountryArray *pArray, Country_t item) {
    if(isFull(*pArray)) {
        printf("Array is FULL! :( \n");
        return;
    }
    for (int i = pArray->size-1; i >= 0 ; --i) {
        pArray->elements[i+1]=pArray->elements[i];
    }
    pArray->elements[0] = item;
    pArray->size++;
}

void insertLast(CountryArray *pArray, Country_t item) {
    if (isFull(*pArray)) {
        printf("Array is FULL! :( \n");
        return;
    }
    pArray->elements[pArray->size++] = item;
}

int search(CountryArray pArray, Country_t item) {
    if(isEmpty(pArray)) {
        printf("ARRAY_EMPTY_MESSAGE");
        return -1;
    }
    for (int i = 0; i < pArray.size; ++i) {
        if(strcmp(pArray.elements[i].name, item.name) == 0)
            return i;
    }
    return -1;
}

bool update(CountryArray *pArray, int position, Country_t newItem) {
    if(isEmpty(*pArray)) { printf("ARRAY_EMPTY_MESSAGE");
        return false;}
    if ((position < 0 || position >= pArray->size)) {
        printf("ARRAY_POSITION_MESSAGE");
        return false;
    }
    pArray->elements[position] = newItem;
    return true;
}

void deallocateArray(CountryArray *pArray) {
    free(pArray);
    (pArray) = NULL;
}
