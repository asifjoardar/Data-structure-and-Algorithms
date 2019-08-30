#include<stdio.h>
int asif(int a,int b)
{

    if(a==0&&b>0)
        return b;
    else if(b==0&&a>0)
        return a;
    else if(a%b==0)
        return b;
    return asif(b,a%b);
}
int main()
{
    int a,b,gcd,lcm,n1,n2;
    scanf("%d%d",&n1,&n2);
    if(n1>n2)
    {
        a=n1;
        b=n2;
    }
    else
    {
        a=n2;
        b=n1;
    }
    gcd=asif(a,b);
    lcm=(a*b)/gcd;
    printf("gcd=%d lcm=%d\n",gcd,lcm);
    return 0;
}
