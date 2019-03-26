#include<stdio.h>
void main()
{
  char a[100];
  int i,b,k,j,m=0;
  scanf("%[^\n]",a);
  for(i=0;a[i]!='\0';i++)
  {
    for(j=0;a[j]!='\0';j++)
    {
      if(a[i]==a[j])
      {
        k++;
      }
if(k>m)
{
  m=k;
  b=a[i];
}
    }}
    printf("%c",b);
  }

