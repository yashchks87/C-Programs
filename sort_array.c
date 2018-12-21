#include<stdio.h>
int main(){
  int a[10], n;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  printf("Array enterned as follows:\n");
  for(int i=1;i<=n;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
}
