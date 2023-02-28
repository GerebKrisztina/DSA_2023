#include "functions.matrix.h"

int main() {
    int **matrix,n,m;
    readMatrix(&n,&m,&matrix,"date.in");
    printMatrix(n,m,matrix,"CON");
    deallocateMemoryForMatrix(n, &matrix);
    return 0;
}
