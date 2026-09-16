
#include<stdio.h>

int main(){
    char isCheeze;
    float totalBill;
    float finalBill;

    printf("Enter the Total Bill of your Pizza: ");
    scanf("%f", &totalBill);

    printf("Do you want extra cheese (Y/N)?");
    scanf("%c", &isCheeze);

    if(isCheeze == 'Y' || isCheeze == 'y'){
        printf("You have selected extra cheese\n");
        finalBill = totalBill + 1.50;
    }
    else if(isCheeze == 'N' || isCheeze == 'n'){
        printf("You have not selected extra cheese\n");
        finalBill = totalBill;
    }
    else{
        printf("Invalid Selection\n");
        
    }
    printf("Your final bill is: $%.2f\n", finalBill);
    return 0;
}