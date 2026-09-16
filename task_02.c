#include<stdio.h>

int main(){
    int quantity;

    printf("Enter the Quantity of Pizza you want to order: ");
    scanf("%d", &quantity);

    if(quantity>1){
        printf("Checkout our Multi-Pizza Deals!\n");
        printf("Your Total Cost is: $%d\n", quantity * 8);
    }
    else{
        printf("Your Total Cost is: $%d\n", quantity * 8);
    }
        return 0;
}