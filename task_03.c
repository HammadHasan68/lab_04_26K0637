#include<stdio.h>

int main(){
    int quantity;

    printf("Enter the Quantity of Pizza you want to order(1, 2 or 3): ");
    scanf("%d", &quantity);

    switch(quantity){
        case 1:
            printf("1 pizza costs $8\n");
            break;
        case 2:
            printf("Combo of 2 pizzas costs $15\n");
            break;
        case 3:
            printf("Package of 3 pizzas costs $21\n");
            break;
        default:
            printf("Invalid Quantity Selected\n");
    }
    return 0;
}