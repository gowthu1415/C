#include<stdio.h>
#include<string.h>
void main()
{
  char a[200];
  int i,n;
  scanf("%s",a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
    if(a[i]=='X')
    {
      a[i]='A';
    }
    else if (a[i]=='y')
    {
      a[i]='B';
    }
    else if (a[i]=='z')
    {
      a[i]='C';
    }
    else
    {
    a[i]=a[i]+3;
  }}
{
  printf("%s",a);
}}
