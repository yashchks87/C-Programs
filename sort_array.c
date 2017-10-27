#include<stdio.h>
int main()
{
  int a[10],i,n;
  printf("Enter length of array\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++)
  {
    if(a[i]>a[i+1])
    {
      int temp=a[i];
      a[i]=a[i+1];
      a[i+1]=temp;
    }
  }
  for(i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}
