#include<stdio.h>
void main()
{
  int a,digit=0;
  scanf("%d",&a);
  while(a!=0)
  {
    a=a/10;
    digit++;
  }
  printf("%d",digit);
}
