#include<stdio.h>
int main()
{
  int i,number;
  printf("Enter number for multiplication\n");
  scanf("%d",&number);
  for(i=1;i<=10;i++)
  {
    int mul=number*i;
    printf("%d * %d = %d\n",number,i,mul);
  }
}
