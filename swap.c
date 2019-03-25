#include<stdio.h>
void main()
{
  char a[50],t;
  int i;
  scanf("%s",a);
  for(i=0;a[i+1]!='\0';i+=2)
  {
    t=a[i];
    a[i]=a[i+1];
    a[i+1]=t;
   
  }
   printf("%s",a);
}
