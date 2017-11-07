#include<stdio.h>
#include<string.h>
int main()
{
  char str[20],ch;
  int count=0;
  printf("Enter a string\n");
  gets(str);
  printf("Enter which letter you want to search\n");
  scanf("%c",&ch);
  for(int i=0;i<='\0';i++)
  {
    if(ch==str[i])
    {
      count++;
    }
  }
  printf("Total number of occurances of word=%d\n",count);
}
