#include<bits/stdc++.h>
using namespace std;
int  extgcd(int a,int b,int *x,int *y)
{
    if(a==0)
    {
        *x=0;
        *y=1;
        return b;
    }
    int x1,y1;
    int gcd=extgcd(b%a,a,&x1,&y1);
    *x=y1-(b/a) * x1;
    *y=x1;
    return gcd;
}
main()
{
    int x,y;
    int a,b;
    cin>>a>>b;
    int p=extgcd(a,b,&x,&y);
    printf("(%d X %d) + (%d X %d) = gcd(%d)\n",a,x,b,y,p);
}
