#include <stdio.h>
int main(){
    float length;
    float width;

    printf("Enter the length: ");
    scanf("%f", &length);
    printf("Enter the width: ");
    scanf("%f", &width);

    printf("The Area is %fm^2 \n", length * width);
    printf("The Perimeter is %fm", length * 2 + width * 2);

}