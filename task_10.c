
#include <stdio.h>

int main() {

    int size;
    int quantity;
    int crustType;
    float totalCost = 0;
    float finalBill;
    char isCheeze;
    int time;
    char studentIDStatus;
    int fulfillmentOption;

    printf("===============================================\n");
    printf("        WELCOME TO SLICE & DICE PIZZA PALACE\n");
    printf("===============================================\n");

    printf("Select Pizza Size(1-Small, 2-Medium, 3-Large): ");
    scanf("%d", &size);

    switch(size) {
        case 1:
            printf("Small Size Selected\n");
            break;

        case 2:
            printf("Medium Size Selected\n");
            break;

        case 3:
            printf("Large Size Selected\n");
            break;

        default:
            printf("Invalid Size Selected\n");
            return 0;
    }

    printf("\n");

    printf("Select Quantity of Pizza (1, 2 or 3): ");
    scanf("%d", &quantity);

    switch(quantity) {
        case 1:
            printf("1 pizza: $8\n");
            totalCost = 8;
            break;

        case 2:
            printf("2 pizzas: $15 (Save $1)\n");
            totalCost = 15;
            break;

        case 3:
            printf("3 pizzas: $21 (Save $3)\n");
            totalCost = 21;
            break;

        default:
            printf("Invalid Quantity Selected\n");
            return 0;
    }

    printf("\n");

    printf("Select Crust Type(1-Regular, 2-Thin, 3-Stuffed): ");
    scanf("%d", &crustType);

    switch(crustType) {
        case 1:
            printf("Regular Crust Selected (+$0)\n");
            totalCost = totalCost + 0;
            break;

        case 2:
            printf("Thin Crust Selected (+$1)\n");
            totalCost = totalCost + 1;
            break;

        case 3:
            printf("Stuffed Crust Selected (+$2)\n");
            totalCost = totalCost + 2;
            break;

        default:
            printf("Invalid Crust Type Selected\n");
            return 0;
    }

    printf("\n");

    printf("Extra Cheese (Y/N)? ");
    scanf(" %c", &isCheeze);

    if(isCheeze == 'Y' || isCheeze == 'y') {
        printf("Extra Cheese Added (+$1.50)\n");
        totalCost = totalCost + 1.50;
    }
    else if(isCheeze == 'N' || isCheeze == 'n') {
        printf("No Extra Cheese Added\n");
    }
    else {
        printf("Invalid Selection\n");
        return 0;
    }

    printf("\n");

    printf("Enter current hour (0-23): ");
    scanf("%d", &time);

    if(time >= 11 && time <= 14) {
        printf("Happy Hour 10%% discount applied!\n");
        totalCost = totalCost * 0.90;
    }
    else {
        printf("No discount applicable.\n");
    }

    printf("\n");

    printf("Student ID status (Y/N)? ");
    scanf(" %c", &studentIDStatus);

    if(studentIDStatus == 'Y' || studentIDStatus == 'y') {
        printf("Student discount applied! (-$2.00)\n");
        totalCost = totalCost - 2;
    }
    else if(studentIDStatus == 'N' || studentIDStatus == 'n') {
        printf("No student discount applicable.\n");
    }
    else {
        printf("Invalid Selection\n");
        return 0;
    }

    printf("\n");

    printf("Fulfillment Option (1-Pickup, 2-Delivery): ");
    scanf("%d", &fulfillmentOption);

    switch(fulfillmentOption) {
        case 1:
            printf("Pickup Selected (+$0)\n");
            break;

        case 2:
            printf("Delivery Selected (+$3)\n");
            totalCost = totalCost + 3;
            break;

        default:
            printf("Invalid Fulfillment Option\n");
            return 0;
    }

    finalBill = totalCost;

    printf("\n");

    // FINAL RECEIPT

    printf("========================================\n");
    printf("             ORDER RECEIPT\n");
    printf("========================================\n");

    printf("Pizza Size:     ");

    if(size == 1)
        printf("Small\n");
    else if(size == 2)
        printf("Medium\n");
    else
        printf("Large\n");

    printf("Quantity:       %d pizza(s)\n", quantity);

    printf("Crust Type:     ");

    if(crustType == 1)
        printf("Regular\n");
    else if(crustType == 2)
        printf("Thin\n");
    else
        printf("Stuffed\n");

    printf("Extra Cheese:   ");

    if(isCheeze == 'Y' || isCheeze == 'y')
        printf("Yes\n");
    else
        printf("No\n");

    printf("Student ID:     ");

    if(studentIDStatus == 'Y' || studentIDStatus == 'y')
        printf("Yes\n");
    else
        printf("No\n");

    printf("Fulfillment:    ");

    if(fulfillmentOption == 1)
        printf("Pickup\n");
    else
        printf("Delivery\n");

    printf("----------------------------------------\n");

    if(quantity == 3 && crustType == 3) {
        printf("BONUS: Free Garlic Bread included!\n");
    }

    printf("========================================\n");
    printf("FINAL TOTAL:    $%.2f\n", finalBill);
    printf("========================================\n");

    return 0;
}