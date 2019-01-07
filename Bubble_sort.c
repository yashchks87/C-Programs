#include<stdio.h>
int main(){
  int myArray[20], n;
  printf("Please enter length of array.\n");
  scanf("%d", &n);
  printf("Enter elements.\n");
  for(int i=1;i<=n;i++){
    scanf("%d\n", &myArray[i]);
  }
  printf("Printing the elements....\n");
  for(int i=1;i<=n;i++){
    printf("myArray[%d]=%d\n", i, myArray[i]);
  }
  printf("Now we are sorting the array.\n");
  for(int i=1;i<=n;i++){
    for(int j=1;j<=n;j++){
      if(myArray[j]>myArray[j+1]){
        int temp = myArray[j];
        myArray[j] = myArray[j+1];
        myArray[j+1] = temp;
      }
    }
  }
  printf("Printing the sorted array.\n");
  for(int i=1;i<=n;i++){
    printf("myArray[%d]=%d\n", i, myArray[i]);
  }
}
