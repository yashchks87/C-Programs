#include<stdio.h>
int main()
{
  int n,a[10],sum=0;
  for(int i=1;i<=10;i++)
  {
    a[i]=i;
    sum=a[i]+i;
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("Sum=%d\n",sum);
}
