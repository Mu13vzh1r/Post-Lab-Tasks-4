#include <stdio.h>
int main()
{
    float marks;
    int familyIncome;

    printf("Enter marks percentage:");
    scanf("%f", &marks);
    printf("Enter your family income:");
    scanf("%d", &familyIncome);

    if (marks >= 80 || familyIncome < 50000) {
        printf("You qualify for a scholarship.");
    }
    else {
        printf("You do not qualify for a scholarship");

    } 


}