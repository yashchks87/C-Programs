#include<stdio.h>
int main()
{
  int number,reminder=0,new_num=0;
  printf("Enter a number:\n");
  scanf("%d",&number);
  while(number>0)
  {
    reminder=number%10;
    new_num=new_num*10+reminder;
    number/=10;
  }
  printf("Number reversed:%d",new_num);
}
