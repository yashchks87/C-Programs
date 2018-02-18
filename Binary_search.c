#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  printf("Values should be entered in sorted form only.\n");
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  int value_to_search;
  printf("Enter value to search from whole array.\n");
  scanf("%d",&value_to_search);
  int lower_bound=1,upper_bound=n,mid_point;
  while(lower_bound<=upper_bound)
  {
    int mid_point;
    mid_point=lower_bound + ((upper_bound - lower_bound)/2);
    if(a[mid_point]>value_to_search)
    {
      upper_bound = mid_point-1;
    }
    else if (a[mid_point]<value_to_search)
    {
      lower_bound = mid_point + 1;
    }
    else if(a[mid_point]==value_to_search)
    {
      printf("The value is found at %d position.\n",mid_point);
      break;
    }
  }
}
