//
// Created by gereb on 4/24/2023.
//

#ifndef PARCIALIS_JAVITAS_FUNCTIONS_H
#define PARCIALIS_JAVITAS_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <constants.h>
#include <string.h>

enum Type{IGEN,NEM};

typedef struct{
    char name[18];
    float area;
    enum Type type;
}Country_t;

typedef struct { ;
    int capacity;
    int size;
    Country_t *elements;
}CountryArray;

char *getTypeDescription(enum Type type);
void readCountryDetails(Country_t *pCountry);
void printCountryDetails(Country_t country);
void createArray(int capacity, CountryArray * pArray);
void printArray(CountryArray array);
bool isFull(CountryArray array);
bool isEmpty(CountryArray array);
Country_t getItemAt(CountryArray array, int position);
void insertFirst(CountryArray * pArray, Country_t item);
void insertLast(CountryArray * pArray, Country_t item);
int search(CountryArray pArray, Country_t item);
bool update(CountryArray* pArray, int position, Country_t newItem);
void deallocateArray(CountryArray *pArray);


#endif //PARCIALIS_JAVITAS_FUNCTIONS_H
