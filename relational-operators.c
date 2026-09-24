#include<stdio.h>
int main(){
  int num1,num2;
  printf("enter first number : ");
  scanf("%d",&num1);
  printf("enter second number : ");
  scanf("%d",&num2);

  if(num1 > num2 ) {
  printf("first number is greater then the second number ");
  } else if(num1 < num2) {
  printf("second number is greater then the first number ");
  } else {
  printf("both numbers are equal");
  }

return 0;
}
