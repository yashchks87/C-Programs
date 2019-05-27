// It's a part of Data structures and algorithms portion....
#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  //For input of array....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  int value_to_find, isFound=0;
  printf("Enter the value to search from array.\n");
  scanf("%d",&value_to_find);
  for(int i=1;i<=n;i++)
  {
    if(a[i]==value_to_find)
    {
      printf("Yes, The value found at %d index number.\n",i);
      isFound=1;
    }
  }
  if(isFound==0)
  {
    printf("The value is not present in whole array.\n");
  }
}
