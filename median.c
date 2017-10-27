#include<stdio.h>
int main()
{
  int a[10],n,i,j,median=0;
  printf("Enter lenght of elements:\n");
  scanf("%d\n",&n);
  //For imput of array....
  for(i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  //For sorting of array....
  //Here temp is local variable only visible to for loop only.
  for(i=1;i<=n;i++)
  {
    for(j=i+1;j<=n;j++)
    {
      if(a[i]>a[j])
      {
        int temp=a[i];
        a[i]=a[j];
        a[j]=temp;
      }
    }
  }
  //Printing of sorted array....
  for(i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
  //Finding median....
  //For even: divide nu of elements into 2....
  //For odd: take nu of elemtns by 2....
  for(int i=1;i<=n;i++)
  {
    int k;
    if(n%2==0)
    {
      k=n/2;
      median=((a[k]+a[k+1])/2);
    }
    else
    {
      k=n/2;
      median=a[k];
    }
  }
  printf("Median=%d\n",median);
}
