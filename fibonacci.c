#include<stdio.h>
int main(){
  int a[50];
  a[0] = 0;
  a[1] = 1;
  for(int i=0;i<=50;i++)
  {
    // third = first + second;
    // first = third;
    a[i+2] = a[i] + a[i+1];
  }
  for(int i=0;i<=50;i++)
  {
    printf("a[%d]=%d\n",i,a[i]);
  }
}
