//
// Created by gereb on 3/7/2023.
//

#include "functions_student.h"
char * getGenderDescription(enum Gender gender){
    switch (gender){
        case FEMALE:
            return "FEMALE";
        case MALE:
            return "MALE";
        default: return "UNDEFINED";
    }
}

void readStudentDetails(Student_t *pStudent){
    scanf("%[^\n]\n", pStudent->name);
    scanf("%s\n\n", pStudent->neptunCode);
    scanf("%[^\n]", pStudent->birthPlace);
    scanf("%i%i%i\n", &pStudent->dateOfBirth.year, &pStudent->dateOfBirth.month, &pStudent->dateOfBirth.day);
    scanf("%i", &pStudent->gender);
    scanf("%f\n", &pStudent->examResult);
}

void printStudent(Student_t student){
    printf("Student name: %s\n", student.name);
    printf("\tStudent Neptun Code: %s\n", student.neptunCode);
    printf("\tStudent birthplace: %s\n", student.birthPlace);
    printf("\tStudent birth date: %i.%i.%i\n", student.dateOfBirth.year, student.dateOfBirth.month, student.dateOfBirth.day);
    printf("\tStudent gender: %s\n", getGenderDescription(student.gender));
    printf("\tStudent exam result: %.2f\n", student.examResult);
}

void allocateMemoryForStudents(Student_t **dpStudents, int numberOfStudents){
    *dpStudents = (Student_t *) malloc(numberOfStudents * sizeof (Student_t));
    if(!(*dpStudents)) {
        printf(MEMORY_ALLOCATION_ERROR_MESSAGE);
        exit(MEMORY_ALLOCATION_ERROR_CODE);
    }
}

void readAllStudentsDetails(Student_t **dpStudents, int *numberOfStudents, const char *input){
    if(!freopen(input,"r", stdin)) {
        printf(FILE_OPEN_MESSAGE);
        exit(FILE_OPEN_ERROR_CODE);
    }
    scanf("%i\n", numberOfStudents);
    allocateMemoryForStudents(&(*dpStudents), *numberOfStudents);
    for (int i = 0; i < *numberOfStudents; ++i) {
        readStudentDetails(&((*dpStudents)[i]));
    }
    freopen("CON", "r", stdin);
}
void printAllStudents(Student_t *pStudents, int numberOfStudents, const char *destination){
    freopen(destination, "w", stdout);
    for(int i=0; i<numberOfStudents; ++i) {
        printStudent(pStudents[i]);
    }
    freopen("CON", "w", stdout);
}

void deallocateMemoryForStudents(Student_t **dpStudents) {
    free(*dpStudents);
    (*dpStudents) = NULL;
}


