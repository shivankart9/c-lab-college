#include<stdio.h>
int main(){
    char name[30];
    int age;
    char gender;
    long phone;
    float percentage;

    printf("Enter your name : ");
    scanf("%s",&name);
    printf("Enter your age : ");
    scanf("%d",&age);
    printf("Enter  your gender(M/F) : ");
    
    scanf("%s",&gender);
    printf("Enter your phone number : ");
    scanf("%ld",&phone);
    printf("Enter your phone percentage : ");
    scanf("%f",&percentage);

    printf("Entered name is : %s\n",name);
    printf("Entered age is %d\n",age);
    printf("Entered Gender is : %s\n",gender);
    printf("Entered phone number is : %ld\n",phone);
    printf("Entered phone perecentage is %f",percentage);

    return 0;
}
