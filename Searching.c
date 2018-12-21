#include<stdio.h>
#define MAX 100
int sr[MAX];
int nu_of_elements;
int first();
int linear();
int binary();
int main()
{
  int option;
  while(option!=0)
  {
    printf("\n******MAIN MENU******\n");
    printf("1. Enter the full array.\n");
    printf("2. Search using linear search method.\n");
    printf("3. Search using binary search method.\n");
    printf("4. Search using interpolation search method.\n");
    printf("5. Search using hash search method.\n");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        first();
        break;
      }

      case 2:
      {
        linear();
        break;
      }

      case 3:
      {
        binary();
        break;
      }
    }
  }
  return 0;
}
int first()
{
  printf("Please enter the length of arrray.\n");
  scanf("%d",&nu_of_elements);
  for(int i=1;i<=nu_of_elements;i++)
  {
    scanf("%d",&sr[i]);
  }
  printf("Now, printing the whole array.\n");
  for(int i=1;i<=nu_of_elements;i++)
  {
    printf("Array[%d]=%d",i,sr[i]);
  }
  return 0;
}

int linear()
{
  int nu_to_search, isFound = 0;
  printf("Enter which number you want to search.\n");
  scanf("%d", &nu_to_search);
  for(int i=1;i<=nu_of_elements;i++)
  {
    if(nu_to_search==sr[i])
    {
      printf("The number is found at %d position.\n",i);
      isFound = 1;
    }
  }
  if(isFound==0)
  {
    printf("The searched number is not present in array.\n");
  }
  return 0;
}

int binary()
{
  int nu_to_search;
  printf("Enter numberto search from array.\n");
  scanf("%d",&nu_to_search);
  // printf("First let's sort the whole array.\n");
  // for(int i=0;i<=nu_of_elements;i++)
  // {
  //
  // }
  int lower_bound=1, upper_bound=nu_of_elements;
  while()
  {
    if(lower_bound+upper_bound)
  }
  return 0;
}
