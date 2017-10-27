#include<stdio.h>
int main()
{
  int i,sum=0,number,a[10];
  printf("Enter end number=");
  scanf("%d",&number);
  for(i=1;i<=number;i++)
  {
    if(i%2!=0)
    {
      sum+=i;
      printf("%d\n",i);
    }
  }
  printf("Sum of odd digits=%d\n",sum);
}
