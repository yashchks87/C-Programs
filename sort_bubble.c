#include<stdio.h>
int main()
{
  int a[10],n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  //For entering elements....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  //For sorting using bubble sort....
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
  //For printing the values....
  for(int i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }

}
