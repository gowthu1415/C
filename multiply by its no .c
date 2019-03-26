#include <stdio.h>
void main()
{
    int n,rev=0,a,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        a=n%10;
        sum=sum+(a*a);
        n=n/10;
    }
    printf("%d",sum);

}
