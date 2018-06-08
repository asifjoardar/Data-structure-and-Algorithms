#include<stdio.h>
typedef long long int lli;
lli asif(lli n,lli p,lli d)
{
    lli x;
    if(p==0) return 1;
    if(p%2==0)
    {
        x=asif(n,p/2,d);
        return (x%d*x%d)%d;
    }
    else
        return ((n%d)*asif(n,p-1,d)%d)%d;
}
int main()
{
    lli a,b,c;
    scanf("%lld%lld%lld",&a,&b,&c);
    printf("%lld\n",asif(a,b,c));
}
