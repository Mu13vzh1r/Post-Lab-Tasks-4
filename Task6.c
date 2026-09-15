#include <stdio.h>
int main(){
    float temp;
    
    printf("Enter the temperature in celcius: ");
    scanf("%f", &temp);

    float tempFahr = (temp * 9/5) + 32;
    printf("%f degrees Celcius is equal to %f degrees Fahrenheit", temp, tempFahr);
}