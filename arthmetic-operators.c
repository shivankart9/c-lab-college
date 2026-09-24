#include<stdio.h>

int main() {
    int func,num1,num2;

    printf("enter first number : ");
    scanf("%d",&num1);

    printf("enter second number : ");
    scanf("%d",&num2);

    printf("Enter what you want to do (1- addition\n2-subtraction\n3-multipliication\n4-division\n5-modulus\n) : ");
    scanf("%d",&func);

    if(func == 1) {
        printf("sum = %d\n",num1+num2);
    } else if(func == 2) {
        printf("subtraction = %d\n",num1-num2);
    } else if(func == 3) {
        printf("multiplication = %d\n",num1*num2);
    } else if(func == 4) {
        printf("division = %d\n",num1/num2);
    } else if(func == 5) {
        printf("modulus = %d\n",num1%num2);
    } else {
        printf("Wrong input");
    }

    return 0;
}
