#include<stdio.h>
int main()
{
  prime();
}
int prime()
{
  int number,flag=0;
  printf("Enter number.\n");
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
    printf("It's prime.\n");
    return 1;
  }
  else
  {
    printf("It's composite.\n");
    return 0;
  }
}
