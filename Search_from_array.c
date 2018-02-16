#include<stdio.h>
int main()
{
  int i,option,a[10],n;
  printf("Enter length of array.\n");
  // N variable is for length of array.
  scanf("%d",&n);
  printf("Enter elements\n");
  //For submitting values in array....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  //For printing values in array....
  // for(int i=1;i<=n;i++)
  // {
  //   printf("%d\n",a[i]);
  // }
  printf("\n\n");
  // For searching values from array....
  int val_search;
  printf("Enter value to search from array.\n");
  scanf("%d",&val_search);
  for(int i=1;i<=n;i++)
  {
    if(val_search==a[i])
    {
      printf("value is found, and it's at %d position.\n",i);
    }
  }
}
