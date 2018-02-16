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
  printf("Enter position at which you want to delete value.\n");
  int position_to_delete,deleted_value;
  scanf("%d",&position_to_delete);
  for(int i=1;i<=n;i++)
  {
    if(position_to_delete<=i)
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
