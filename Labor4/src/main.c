#include <stdio.h>
#include "functions_student.h"

int main() {

/*Student_t student;
    //allloanybol
    freopen("data.in", "r", stdin);
    readStudentDetails(&student);
    printStudent(student);
    freopen("CON", "r", stdin);

    //billentyuzetrol
    readStudentDetails(&student);
    printStudent(student);

    //megfeleltetessel csak a deklaralaskor lehetseges!!!
    Student_t student1={"Nagy Csilla", "werrt", "Sarpatak", {1945,9,3},1,10};
    printStudent(student1);*/

    Student_t *students;
    int n;
    readAllStudentsDetails(&students, &n, "data.in");
    printAllStudents(students, n, "CON");
    printf("\n");
    deallocateMemoryForStudents(&students);
    return 0;
}
