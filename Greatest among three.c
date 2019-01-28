#include<stdio.h>
void main()
{
  int a,b,c;
  scanf("%d%d%d",&a,&b,&c);
  if((a>b)&&(a<b))
  {
    printf("a is grater");
  }
  else if((b>c)&&(b<a))
  {
    printf("b is grater");
  }
  else
  {
    printf("c is grater");
  }
}
