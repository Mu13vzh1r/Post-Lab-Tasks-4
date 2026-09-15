#include <stdio.h>
int main(){
    int num1, num2, num3;
    printf("Enter 3 numbers (use space to seperate them): ");
    scanf("%d %d %d", &num1, &num2, &num3);

    float average = (num1+num2+num3)/3.0;
    printf("The average of these numbers is %f", average);
}