//
// Created by gereb on 3/21/2023.
//

#ifndef LABOR6_PERSON_H
#define LABOR6_PERSON_H
#include <constants.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char name[50];
    float height;
    float weight;
    float bmi;
    int hasJob;
}Person;

void readOnePersonDetails(Person *pPerson);
void printOnePerson(Person person);
void allocateMemoryForAllPersons(Person **dpPersons, int numberOfPersons);
void readAllPersons(Person **dpPresons, int *numberOfPersons,const char *input);


#endif //LABOR6_PERSON_H
