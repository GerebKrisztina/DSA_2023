//
// Created by gereb on 3/28/2023.
//

#ifndef PARCIALIS_GEREB_KRISZTINA_ORSZAG_H
#define PARCIALIS_GEREB_KRISZTINA_ORSZAG_H
#include <stdio.h>
#include <string.h>

enum Type {IGEN, NEM};

typedef struct {
    char name[18];
    float area;
    enum Type type;
}Country_t;

typedef struct {
    int capacity;
    int size;
    Country_t *elements;
}CountryArray;

char* getTypeDescription(enum Type type);
void readCountryDetails(Country_t *pCountry);
void printCountryDetails(Country_t country);

void createArray(int capacity, CountryArray *pArray);
void printArray(CountryArray array);
bool isFull(CountryArray array);
bool isEmpty(CountryArray array);
Country_t getItemAt(CountryArray array, int position);
void insertFirst(CountryArray *pArray, CountryArray item);
void insertLast(CountryArray *pArray, CountryArray item);
int search(CountryArray *pArray, CountryArray item);
bool update(CountryArray* pArray, int position, CountryArray newItem);
void deallocateArray(CountryArray *pArray);


#endif //PARCIALIS_GEREB_KRISZTINA_ORSZAG_H
