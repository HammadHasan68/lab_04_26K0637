
#include<stdio.h>

int main(){
    char isCheeze;
    float totalBill;
    float finalBill;
    int studentIDStatus;

    printf("Enter the Total Bill of your Pizza: ");
    scanf("%f", &totalBill);

    printf("Enter (1/0) based on the Student ID status: ");
    scanf("%d", &studentIDStatus);

    if(studentIDStatus == 1){
        printf("Student discount applicable!\n");
        finalBill = totalBill - 2;
    }
    else{
        printf("No student discount applicable.\n");
        finalBill = totalBill;
    }

    if(finalBill < 0){ // Check if the final bill is negative
        finalBill = 0;
    }

    printf("Your final bill is: $%.2f\n", finalBill);
    return 0;
}