
#include<stdio.h>

int main(){
    char isCheeze;
    float totalBill;
    float finalBill;
    int time;

    printf("Enter the Total Bill of your Pizza: ");
    scanf("%f", &totalBill);

    printf("Enter the current time of the day in 24-hour format (0-23): ");
    scanf("%d", &time);

    if(time >=11 && time <= 14){
        printf("Discount applicable for lunch time!\n");
        finalBill = totalBill * 0.90; // 10% discount
    }
    else{
        printf("No discount applicable.\n");
        finalBill = totalBill;
    }
    printf("Your final bill is: $%.2f\n", finalBill);
    return 0;
}