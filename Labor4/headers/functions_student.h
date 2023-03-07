//
// Created by gereb on 3/7/2023.
//

#ifndef LABOR4_FUNCTIONS_STUDENT_H
#define LABOR4_FUNCTIONS_STUDENT_H
#include <stdio.h>
#include <stdlib.h>
#include <constants.h>

enum Gender {MALE, FEMALE};

typedef struct{
    int year, month, day;
}Date_t;

typedef struct{
    char name[50];
    char neptunCode[8];
    char birthPlace[25];
    Date_t dateOfBirth;
    enum Gender gender;
    float examResult;
}Student_t;

char * getGenderDescription(enum Gender gender);
void readStudentDetails(Student_t *pStudent);
void printStudent(Student_t student);

#endif //LABOR4_FUNCTIONS_STUDENT_H
