#include<stdio.h>
int main(){
  int n, a[10];
  printf("Enter length of array.");
  // Declaring length of whole array.
  scanf("%d",&n);
  for(int i=1;i<=n;i++){
    printf("Enter %d index value.\n",i);
    scanf("%d",&a[i]);
  }
  printf("Printing the unsorted array.\n");
  for(int i=1;i<=n;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
  printf("Sorting will starts.\n");
  // Why 2 loops?
  // Because using 1 loop you are just managing 1 element not all.
  // By creating 2 loops you are managing 2 loops.
  for(int i=1;i<n;i++){
    for(int j=1;j<n;j++){
      if(a[j]>a[j+1]){
        int temp = a[j];
        a[j] = a[j+1];
        a[j+1] = temp;
      }
    }
  }
  printf("Array after sorting.\n");
  for(int i=1;i<=n;i++){
    printf("a[%d]=%d\n",i,a[i]);
  }
}
