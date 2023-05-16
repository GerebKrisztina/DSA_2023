#include <stdio.h>
#include <orszag.h>


int main() {
    /*
    Country_t country;
    readCountryDetails(&country);
    printCountryDetails(country);

    Country_t country1={"Nemetorszag", 3000, 1};
    printCountryDetails(country1);

    if(country1.area > country.area) {
        printf("\n\nBigger coutry is: %s\n\n", country1.name);
    } else
        printf("\n\nBigger coutry is: %s\n\n", country.name);
*/

    CountryArray array;
    createArray(6, &array);
    freopen("country.txt", "rt", stdin);
    for(int i = 0; i < 6; ++i) {
        Country_t country;
        readCountryDetails(&country);
        if(country.type==1) {
            insertFirst(&array,country);
        }
        else
            insertLast(&array, country);
    }


    return 0;
}
