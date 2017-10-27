#include<stdio.h>
int main()
{
  int i,n,a[10],sum=0;
  printf("Enter value of length\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    a[i]=i;
    sum+=a[i];
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("Sum=%d",sum);
}
