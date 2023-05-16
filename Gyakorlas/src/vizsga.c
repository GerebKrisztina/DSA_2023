//
// Created by gereb on 3/27/2023.
//

#include "../headers/vizsga.h"

enum Honap{JAN, FEB,MAR, APR, MAJ, JUN, JUL, AUG, SZEPT, OKT, NOV, DEC};

typedef struct {
    enum Honap honap;
    int nap;
}Idopont;

typedef struct {
    char nev[25];
    Idopont datum;
    char tantargy[20];
    int jegy;
}VIZSGAZO;

