#include<stdio.h>

int main(){
    int quantity;
    int crustType;

    printf("Enter the Quantity of Pizza you want to order(1, 2 or 3): ");
    scanf("%d", &quantity);

    printf("Enter you Crust Type(1 for regular, 2 for Thin, 3 for Stuffed): ");
    scanf("%d", &crustType);
    
    if(quantity ==3 && crustType == 3){
        printf("You get free garlic bread as a Premium Combo!\n");
    }
    else{
        printf("Thank you for your order!\n");
    }
    return 0;
}