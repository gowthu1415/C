#include<stdio.h>
#include<string.h>
void main()
{
  char str1[50],str2[50];
  scanf("%s %s",str1,str2);
  int i,j,flag=1,n,u,v;
 int l1=strlen(str1);
 int l2=strlen(str2);
 if(l1==l2)
 {
 for(i=0;i<l1;i++)
	{
		for(j=i+1;j<l2;j++)
		{
			u=str1[i]-str1[j];
			v=str2[i]-str2[j];
			if(u==v)
			{
				flag=0;
			}
			else
			{
				flag=1;
				break;
			}
		}
	}
	}
	else
	{
		printf("\nno");
	}
	if(flag==1)
	{
		printf("\nno");
	}
	else
	{
		printf("\nyes");
	}

}
