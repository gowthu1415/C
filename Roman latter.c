
#include<stdio.h>
#include<string.h>
int main()
{
  char b[100];
  int i,num=0,l;
  scanf("%s",b);
  l=strlen(b);
  for(i=0;i<l;i++)
  {
    if(b[i]=='I'||b[i]=='i')
    {
    num+=1;
    }
    else if(b[i]=='V'||b[i]=='v')
    {
    num+=5;
    }
    else if(b[i]=='X'||b[i]=='x')
    {
    num+=10;
    }
  }
  for(i=l;i>0;i--)
  {
  if(b[i]>b[i-1])
 {
 num-=2;
  }
  }
  printf("%d",num);
}
