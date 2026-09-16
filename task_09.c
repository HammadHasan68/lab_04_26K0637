#include<stdio.h>

int main(){
    int fulfillmentOption;
    int totalCost;
    int finalBill;

    printf("Enter the Total Cost of your Pizza: ");
    scanf("%d", &totalCost);
    printf("Fulfillment Option (1. Pickup, 2. Delivery): ");
    scanf("%d", &fulfillmentOption);

    switch(fulfillmentOption){
        case 1:
            printf("You have selected Pickup.No additional charge.\n");
            finalBill = totalCost + 0;
            printf("Your final bill is: $%d\n", finalBill);
            break;
        case 2:
            printf("You have selected Delivery. Additional charge of $3 applied.\n");
            finalBill = totalCost + 3;
            printf("Your final bill is: $%d\n", finalBill);
            break;
        default:
            printf("Invalid Fulfillment Option Selected\n");
            finalBill = totalCost;
    }
    return 0;
}