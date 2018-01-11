#include<stdio.h>
int main()
{
  int a[10],n,i;
  printf("Enter lenght of array\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("\n\n");
  for(i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
}
