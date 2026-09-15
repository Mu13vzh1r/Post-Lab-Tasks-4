#include <stdio.h>
int main()
{
    int lateDays;
    printf("Enter the students late days: ");
    scanf("%d", &lateDays);

    if (lateDays == 0) {
        printf("No fine.");
    }
    else if (lateDays >= 1 && lateDays <= 5){
        printf("Fine: Rs. 50");
    }
    else if (lateDays >= 6 && lateDays <= 10){
        printf("Fine: Rs. 100");
    }
    else if (lateDays > 10){
        printf("Fine: Rs. 200");
    }
    else{
        printf("Error! Late days may have accidently been typed in negative.");
    }
} 

