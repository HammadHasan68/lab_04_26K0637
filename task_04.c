#include<stdio.h>

int main(){
    int crustType;
    int totalCost;
    int finalBill;

    printf("Enter the Total Cost of your Pizza: ");
    scanf("%d", &totalCost);
    printf("Enter you Crust Type(1 for regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crustType);

    switch(crustType){
        case 1:
            printf("You have selected Regular Crust\n");
            finalBill = totalCost + 0;
            break;
        case 2:
            printf("You have selected Thin Crust\n");
            finalBill = totalCost + 1;
            break;
        case 3:
            printf("You have selected Stuffed Crust\n");
            finalBill = totalCost + 2;
            break;
        default:
            printf("Invalid Crust Type Selected\n");
    }
    printf("Your final bill is: $%d\n", finalBill);
    return 0;
}