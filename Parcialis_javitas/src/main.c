#include <stdio.h>
#include "functions.h"

int main() {
    //    Country_t country;
//
//    readCountryDetails(&country);
//    printCountryDetails(country);
//
//    Country_t country1={"Romania",2000,1};
//    printCountryDetails(country1);
//
//    if(country1.area > country.area){
//        printf("\n\nBigger country is : %s\n\n", country1);
//    }else{
//        printf("\n\nBigger country is : %s\n\n", country);
//    }
    CountryArray array;
    createArray(6,&array);
    freopen("country.txt","rt",stdin);
    for (int i = 0; i < 6; ++i) {
        Country_t country;
        readCountryDetails(&country);
        if(country.type==1){
            insertFirst(&array, country);
        }
        else{
            insertLast(&array,country);
        }
    }
    printArray(array);
    deallocateArray(&array);
    return 0;
}
