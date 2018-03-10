#include<stdio.h>
int main()
{
  int number,flag=0;
  printf("Enter the number:\n");
  scanf("%d",&number);
  for(int i=2;i<=number-1;i++)
  {
    if(number%i==0)
    {
      flag=1;
      break;
    }
  }
  if(flag==0)
  {
    printf("It's prime\n");
  }
  else
  {
    printf("It's composite.\n");
  }
}
