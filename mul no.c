#include<stdio.h>
int main()
{
int a,b,i;
scanf("%d%d",&a,&b);
for(i=2;i<=100000;i++)
{
if((i%a==0)&&(i%b==0))
{
  printf("%d",i);
  break;
}
}return 0;
}
