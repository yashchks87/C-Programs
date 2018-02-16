#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter value to be deleted.\n");
  int delete_by_value,position_found;
  scanf("%d",&delete_by_value);
  for(int i=1;i<=n;i++)
  {
    if(delete_by_value==a[i])
    {
      position_found=i;
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(position_found<=i)
    {
      a[i]=a[i+1];
    }
  }
  n=n-1;
  for(int i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}
