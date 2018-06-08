#include<stdio.h>
int main()
{
    long long int a=999966000289,i,n;
    while(a%2==0)
    {
        printf("2\n");
        a=a/2;
    }
    for(i=3;i<=sqrt(a);i+=2)
    {
        while(a%i==0)
        {
            printf("%lld\n",i);
            a=a/i;
        }
    }
    if(a>2)
        printf("%lld\n",a);
}
