#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter values of a,b & c\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a>b && a>c)
  {
    printf("A is largest\n");
  }
  else if(b>c)
  {
    printf("B is largest\n");
  }
  else
  {
    printf("C is largest\n");
  }
}
