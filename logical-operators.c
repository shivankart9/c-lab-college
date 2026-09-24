#include<stdio.h>
int main() {
  int num1,num2,num3;
  printf("enter first child marks : ");
  scanf("%d",&num1);
  printf("enter second child marks : ");
  scanf("%d",&num2);
  printf("enter third child marks : ");
  scanf("%d",&num3);

  if(num1 >= 33 && num2 >= 33 && num3 >= 33) {
    printf("all students are pass");
  } else if(num1 < 33 || num2 < 33 || num3 < 33) {
      printf("all students are not pass");
    } else {
      printf("invalid input ");
}

return 0;
}
