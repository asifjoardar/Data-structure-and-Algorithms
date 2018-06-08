#include<iostream>
#include<cmath>
using namespace std;
typedef long long int lli;
int d[1000006];
int asif1(lli n,lli p,lli d)
{
    lli x;
    if(p==0) return 1;
    if(p%2==0)
    {
        x=asif1(n,p/2,d);
        return (x%d*x%d)%d;
    }
    else
        return ((n%d)*asif1(n,p-1,d)%d)%d;
}
int asif(int n)
{
    int i,j=0,p=0;
    while(n%2==0)
    {
        n=n/2;
        p=1;
    }
    if(p==1) d[j++]=2;
    for(i=3;i<=sqrt(n);i+=2)
    {
        p=0;
        while(n%i==0)
        {
            n=n/i;
            d[j]=i;
            p=1;
        }
        if(p==1) j++;
    }
    if(n>2) d[j++]=n;
    return j;
}
main()
{
    int a,b,c,i,j,n,x;
    cin>>a>>b>>c;
    double sum=1.0;
    j=asif(c);
    for(i=0;i<j;i++)
    {
        sum=sum*((d[i]-1.00)/d[i]*1.00);
    }
    n=c*sum;
    x=asif1(b,n-1,c);
    cout<<a*x<<endl;
}
