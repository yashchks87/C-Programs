#include<stdio.h>
int main(){
  int a[10], n, i;
  printf("Enter length of array.\n");
  scanf("%d", &n);
  printf("Enter values:\n");
  for(i=1;i<=n;i++){
    printf("For %d value",i);
    scanf("%d", &a[i]);
  }
  printf("Printing unsorted array\n");
  for(i=1;i<=n;i++){
    printf("a[%d]=%d\n",i, a[i]);
  }
}
