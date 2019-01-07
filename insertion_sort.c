#include<stdio.h>
int main()
{
  int a[10], n, i, j, temp;
  printf("Enter length of array.\n");
  scanf("%d",&n);
  //Entering elements....
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&a[i]);
  }
  // Insertion sort starts....
  for(i=0;i<n;i++){
    temp = a[i];
    j = i-1;
    while((temp<a[j])&&(j>=0)){
      a[j+1] = a[j];
      j--;
    }
    a[j+1] = temp;
  }
  //For printing values....
  for(int i=1;i<=n;i++)
  {
    printf("%d\n",a[i]);
  }
}
