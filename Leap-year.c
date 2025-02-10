#include <stdio.h>

int main() {
    int year;

    if (scanf("%d", &year) != 1) {
        printf("INVALID\n");
        return 0;
    }

    if (year <= 0) {
        printf("The given year %d is Invalid year.\n", year);
    } 
    else {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            printf("Yes, %d is a leap year.\n", year);
        } 
        else {
            printf("No, %d is not a leap year.\n", year);
        }
    }

    return 0;
}
