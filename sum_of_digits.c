#include<stdio.h>
int main()
{
  int number,sum_of_number=0,reminder;
  printf("Enter a number\n");
  scanf("%d",&number);
  while(number>0)
  {
    reminder=number%10;
    sum_of_number=sum_of_number+reminder;
    number/=10;
  }
  printf("Sum of number=%d\n",sum_of_number);
}
