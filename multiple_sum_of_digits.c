#include<stdio.h>
int main()
{
  int n,reminder=0,sum=0,limit;
  int sum1=0,sum2=0,sum3=0;
  printf("Enter how many numbers you want to operate\n");
  scanf("%d",&limit);
  for(int i=1;i<=limit;i++)
  {
    printf("Enter a number:\n");
    scanf("%d",&n);
    while(n>0)
    {
      reminder=n%10;
      sum+=reminder;
      n/=10;
    }
  }
  printf("Sum of digits=%d\n",sum);
}
