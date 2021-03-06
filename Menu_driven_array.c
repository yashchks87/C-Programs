#include<stdio.h>
int a[10];
int print_whole();
int insert_all();
int del_by_pos();
int del_by_val();
int sort_insertion();
int sort_bubble();
int insert_specific_pos();
int linear_search();
int binary_search();
int n;
int main()
{
  int option;
  //This is one time setting length of array....
  printf("Please enter length of array.\n");
  scanf("%d",&n);
  while(option!=0)
  {
    printf("1.Print whole array.\n");
    printf("2.Enter all elements.\n");
    printf("3.Delete value from array by position.\n");
    printf("4.Delete value from array by value.\n");
    printf("5.Insert at specific position.\n");
    printf("6.Sort array using insertion sorting.\n");
    printf("7.Sort array using bubble sorting.\n");
    printf("8.Search element from array by linear search.\n");
    printf("9.Search element from array by binary search.\n");
    printf("Choose appropriate option.");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        // Print whole array.
        print_whole();
        break;
      }
      case 2:
      {
        // Insert all the elements in array.
        insert_all();
        break;
      }
      case 3:
      {
        // Delete array value by it's position.
        del_by_pos();
        break;
      }
      case 4:
      {
        // Delete array value by it's value.
        del_by_val();
        break;
      }
      case 5:
      {
        // Insert value in array at specific position.
        insert_specific_pos();
        break;
      }
      case 6:
      {
        // Sort array using insertion sort method.
        sort_insertion();
        break;
      }
      case 7:
      {
        // Sort array using bubble sort method.
        sort_bubble();
        break;
      }
      case 8:
      {
        // Sort array using bubble sort method.
        linear_search();
        break;
      }
      case 9:
      {
        // Sort array using bubble sort method.
        binary_search();
        break;
      }
    }
  }
}
int print_whole()
{
  for(int i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
  return 0;
}

int insert_all()
{
  printf("Enter elements.\n");
  for(int i=1;i<=n;i++)
  {
    scanf("%d\n",&a[i]);
  }
  return 0;
}
int del_by_pos()
{
  int del_position;
  printf("Enter value of position where to delete.\n");
  scanf("%d\n",&del_position);
  for(int i=1;i<=n;i++)
  {
    if(del_position<=i)
    {
      a[i]=a[i+1];
    }
  }
  n=n-1;
  int print_criteria;
  printf("Press 1 for printing the whole array after deletion or press 0 for main menu.\n");
  scanf("%d",&print_criteria);
  if(print_criteria==1)
  {
    print_whole();
  }
  return 0;
}
int del_by_val()
{
  int del_val,find_val;
  printf("Enter value which to delete.\n");
  scanf("%d\n",&del_val);
  for(int i=1;i<=n;i++)
  {
    if(del_val==a[i])
    {
      find_val=i;
    }
  }
  for(int i=1;i<=n;i++)
  {
    if(find_val<=i)
    {
      a[i]=a[i+1];
    }
  }
  n=n-1;
  int print_criteria;
  printf("Press 1 for printing the whole array after deletion or press 0 for main menu.\n");
  scanf("%d",&print_criteria);
  if(print_criteria==1)
  {
    print_whole();
  }
  return 0;
}
int insert_specific_pos()
{
  int specific_pos,value_to_insert;
  printf("Enter index at which you want to add element.\n");
  scanf("%d",&specific_pos);
  printf("Enter value to inserted.\n");
  scanf("%d",&value_to_insert);
  n=n+1;
  for(int i=n-1;i>=1;i--)
  {
    if(specific_pos<=i)
    {
      a[i+1]=a[i];
    }
    if(specific_pos==i)
    {
      a[i]=value_to_insert;
    }
  }
  int print_criteria;
  printf("Press 1 for printing the whole array after deletion or press 0 for main menu.\n");
  scanf("%d",&print_criteria);
  if(print_criteria==1)
  {
    print_whole();
  }
  return 0;
}
int sort_insertion()
{
  int index_pos;
  int value_to_insert;
  for(int i=1;i<=n;i++)
  {
    index_pos=i;
    value_to_insert=a[i];
    while(index_pos>0 && a[index_pos-1]>value_to_insert)
    {
      a[index_pos]=a[index_pos-1];
      index_pos=index_pos-1;
    }
    a[index_pos]=value_to_insert;
  }
  return 0;
}
int sort_bubble()
{
  for(int i=1;i<=n-1;i++)
  {
    for(int j=1;j<=n-1;j++)
    {
      if(a[j]>a[j+1])
      {
        int temp;
        temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;
      }
    }
  }
  return 0;
}
int linear_search()
{
  int value_to_search,isFound=0;
  printf("Enter value to search from array.\n");
  scanf("%d",&value_to_search);
  for(int i=1;i<=n;i++)
  {
    if(value_to_search==a[i])
    {
      printf("The value is found at %d position.\n",i);
      isFound=1;
    }
  }
  if(isFound==0)
  {
    printf("The value is not present in the whole array.\n");
  }
}
int binary_search()
{
  int value_to_search;
  printf("Enter value to search from array.\n");
  scanf("%d",&value_to_search);
  int lower_bound=1,upper_bound=n;
  while(lower_bound<=upper_bound)
  {
    int mid_point;
    mid_point=lower_bound + ((upper_bound-lower_bound)/2);
    if(a[mid_point]<value_to_search)
    {
      lower_bound = mid_point + 1;
    }
    else if(a[mid_point]>value_to_search)
    {
      upper_bound = mid_point - 1;
    }
    else if(a[mid_point]==value_to_search)
    {
      printf("The value is found at %d position.\n",mid_point);
    }
  }
}
