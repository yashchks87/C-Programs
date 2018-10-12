#include<stdio.h>
int main(){
  int a[10], i, n, number, sort[10];
  printf("Enter lenght of array.\n");
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    scanf("%d",&a[i]);
  }
  for(i=1;i<=n;i++){
    printf("%d\n",a[i]);
  }
  printf("Enter number from which you want sort.");
  scanf("%d",&number);
  // Number division will start.
  for(i=1;i<=n;i++){
    if(a[i]<=number){
      sort[]=a[i];
    }
    printf("sort[%d]=%d",i,sort[i]);
  }
  for(i=1;i<=n;i++){
    printf("%d\n",sort[i]);
  }
}
