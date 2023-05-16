//
// Created by gereb on 3/28/2023.
//

#include <malloc.h>
#include "../headers/orszag.h"
#include "constants.h"

char* getTypeDescription(enum Type type) {
    switch (type) {
        case 0:
            return "IGEN";
        case 1:
            return "NEM";
        default: return "UNDEFINED";
    }
}

void readCountryDetails(Country_t *pCountry) {
    scanf("%[^\n]\n", pCountry->name);
    scanf("%f\n", &pCountry->area);
    scanf("%i", &pCountry->type);
}

void printCountryDetails(Country_t country){
    printf("\nNev: %s", country.name);
    printf("\tTerulete: %.2f", country.area);
    printf("\tEuropai: %s", getTypeDescription(country.type));
}

void createArray(int capacity, CountryArray *pArray){

}
void printArray(CountryArray array){
    if(isEmpty(array)) {
        printf("ARRAY_EMPTY_MESSAGE");
        return;
    }
    printf("The elements of the array: ");
    for (int i=0; i<array.size; ++i) {
        printCountryDetails(array.elements[i]);
    }
}
bool isFull(CountryArray array){
    return array.size;
}
bool isEmpty(CountryArray array){

}
Country_t getItemAt(CountryArray array, int position){
    if(isEmpty(array)) {
        printf(FILE_OPEN_MESSAGE); return false;
    }
    if((position < 0 || position >= array.size)) {
        printf("FILE_OPEN_ERROR_CODE");
        return INT_MIN;
    }
    return
}
void insertFirst(CountryArray *pArray, CountryArray item){
    if(isFull(*pArray)) {
        printf("Array is FULL! :( \n");
        return;
    }
    for (int i = pArray->size-1; i >= 1; --i) {
        pArray->elements[i+1]=pArray->elements[i];
    }
    pArray->elements[0] = item;
    pArray->size++;
}
void insertLast(CountryArray *pArray, CountryArray item){

}
int search(CountryArray pArray, CountryArray item){
    if (isEmpty(pArray)) {
        printf("ARRAY_EMPTY_MESSAGE");
        return -1;
    }
    for (int i = 0; i < pArray.size; ++i) {
        if(strcmp(pArray.elements[i].name, item.name) == 0) {
            return i;
        }
        return 0;
    }
}
bool update(CountryArray* pArray, int position, CountryArray newItem){

}

void deallocateArray(CountryArray *pArray){
    free(pArray);
    (pArray) = NULL;
}
