#include<stdio.h>
int main()
{
  struct numbers
  {
    int a,b,c;
    int largest;
  };
  struct numbers num1;
  printf("Enter all struct values:\n");
  printf("Enter a:\n");
  scanf("%d",&num1.a);
  printf("Enter b:\n");
  scanf("%d",&num1.b);
  printf("Enter c:\n");
  scanf("%d",&num1.c);
  if(num1.a>num1.b && num1.a>num1.c)
  {
    printf("A is largest.\n");
  }
  else if(num1.b>num1.c)
  {
    printf("B is largest.\n");
  }
  else
  {
    printf("C is largest.\n");
  }
}
