//
// Created by gereb on 3/21/2023.
//

#include "../headers/person.h"


void readOnePersonDetails(Person *pPerson){
    scanf("%[^\n]\n", pPerson->name);
    scanf("%i\n", pPerson->height);
    scanf("%i\n", pPerson->weight);
    scanf("%i", &pPerson->hasJob);
}

void printOnePerson(Person person){

}

void allocateMemoryForAllPersons(Person **dpPersons, int numberOfPersons){
    *dpPersons = (Person_t *) malloc(numberOfPersons * sizeof (Persons_t));
    if(!(*dpPersons)) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void readAllPersons(Person **dpPresons, int *numberOfPersons,const char *input){

}
