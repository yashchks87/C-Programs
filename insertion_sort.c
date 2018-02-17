#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  //Entering elements....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  //Bubble sort code....
  int value_to_insert,index_pos;
  for(int i=1;i<=n;i++)
  {
    value_to_insert=a[i];
    index_pos=i;
    while(index_pos>0 && a[index_pos-1]>value_to_insert)
    {
      // int temp;
      a[index_pos]=a[index_pos-1];
      index_pos=index_pos-1;
    }
    a[index_pos]=value_to_insert;
  }
  //For printing values....
  for(int i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
}
