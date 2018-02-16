#include<stdio.h>
int main()
{
  int option;
  while(option!=0)
  {
    printf("1.Print whole array.\n");
    printf("2.Delete value from array.\n");
    printf("3.Insert at specific position.\n");
    printf("Choose appropriate option.");
    scanf("%d",&option);
    switch(option)
    {
      case 1:
      {
        //print whole array.
        print_whole();
      }
    }
  }
}
int print_whole()
{
  for(i=1;i<=n;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}
