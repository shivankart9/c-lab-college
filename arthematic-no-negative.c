#include<stdio.h>
int main () {
    int num1,num2,funct;
    printf("enter first number : ");
    scanf("%d",&num1);
    printf("enter second number : ");
    scanf("%d",&num2);

    printf("enter the function (\n1-addition\n2-subtraction\n3-multiplication\n4-division = ");
    scanf("%d",&funct);

    if(funct == 1) {
        printf("addition = %d",num1+num2);
    } else if(funct == 2) {
        if(num1 >= num2) {
            printf("subtraction of num1 and num2 %d ",num1-num2);
        } else {
            printf("subtraction will be negative");
        }
    } else if(funct == 3){
        printf("multiplication = %d",num1*num2);
    } else if(funct == 4){
        if(num2 != 0) {
            printf("division = %d",num1/num2);
        } else {
            printf("division not possible as num2 is zero");
        }
    } else {
        printf("invalid function input");
    }

    return 0;
    
}
