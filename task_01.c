#include<stdio.h>

int main(){
    int size;

    printf("Enter the Size of your Pizza(1-Small, 2-Medium, 3-Large): ");
    scanf("%d", &size);

    switch(size){
        case 1:
            printf("You have selected Small Size Pizza\n");
            break;
        case 2:
            printf("You have selected Medium Size Pizza\n");
            break;
        case 3:
            printf("You have selected Large Size Pizza\n");
            break;
        default:
            printf("Invalid Size Selected\n");
    }
    return 0;
}