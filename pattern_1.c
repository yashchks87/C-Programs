#include<stdio.h>
int main()
{
  int n;
  printf("Enter how many lines you want to print\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++)
  {
    for(int j=1;j<=i;j++)
    {
      //printf("%d",i);
    }
    printf("%d\n",i);
  }
}
