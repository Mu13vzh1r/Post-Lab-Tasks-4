#include <stdio.h>
int main() {
    char studentName[999];
    char gender;
    
    //Complete line of text
    printf("Enter your name: ");
    fgets(studentName, 999, stdin);

    //Single character
    printf("Enter your gender (M or F): ");
    gender = getchar();
    
    printf("Student: ");
    puts(studentName);
    printf("Gender: ");
    putchar(gender);
}