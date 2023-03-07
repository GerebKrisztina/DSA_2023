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
    scanf("%f", &pStudent->examResult);
}

void printStudent(Student_t student){
    printf("Student name: %s\n", student.name);
    printf("\tStudent Neptun Code: %s\n", student.neptunCode);
    printf("\tStudent birthplace: %s\n", student.birthPlace);
    printf("\tStudent birth date: %i.%i.%i\n", student.dateOfBirth.year, student.dateOfBirth.month, student.dateOfBirth.day);
    printf("\tStudent gender: %s\n", getGenderDescription(student.gender));
    printf("\tStudent exam result: %.2f\n", student.examResult);
}
