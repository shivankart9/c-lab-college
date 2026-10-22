#include<stdio.h>
int main() {
    int choice,num1,num2;
    printf("Enter first number : ");
    scanf("%d",&num1);
    printf("Enter second number : ");
    scanf("%d",&num2);

    printf("Enter Your Choice (1 = Addition\n2 = subtraction\n3 = multiplication\n4 = division : ");
        scanf("%d",&choice);

    switch(choice) {
        case 1: {
            printf("additon : %d",num1+num2);
            break;
        }
        case 2: {
            printf("subtraction : %d",num1-num2);
            break;
        }
        case 3: {
            printf("multiplication : %d",num1*num2);
            break;
        }
        case 4: {
            if(num2 == 0) {
                printf("Division not possible");
            } else {
                printf("divison : %d",num1/num2);
            }
            break;
        }
       default : {
            printf("Invalid choice");
           break;
        }
    }

    return 0;
}
