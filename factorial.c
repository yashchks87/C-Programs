#include<stdio.h>
int main()
{
  int n,mul=1;
  printf("Enter number:");
  scanf("%d",&n);
  for(int i=n;i>0;i--)
  {
    mul*=i;
  }
  printf("Factorial=%d",mul);
}
