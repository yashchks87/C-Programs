#include<stdio.h>
int main()
{
  int t,a,b;

  scanf("%d\n",&t);
  while(t--)
  {
    scanf("%d %d",&a,&b);

    printf("%d",a%b);
  }
  return 0;
}
