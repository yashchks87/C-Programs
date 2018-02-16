#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  printf("Enter elements\n");
  //For submitting array values....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  // int insert_value;
  //For extend size of array....
  n=n+1;
  printf("Enter index position at which you want to insert elements....");
  int index_pos,insert_val;
  scanf("%d",&index_pos);
  printf("Enter value of new element.\n");
  scanf("%d",&insert_val);
  for(int i=n-1;i>=1;i--)
  {
    if(index_pos<=i)
    {
      a[i+1]=a[i];
    }
    if(i==index_pos)
    {
      a[i]=insert_val;
    }
  }
  for(int i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
}
