#include<bits/stdc++.h>
using namespace std;
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
bool f(lli n,lli k)
{
    if(n<=1) return false;
    else if(n==2||n==3) return true;
    for(lli i=0;i<k;i++)
    {
        lli a=rand()%(n-1)+1;
        if(asif(a,n-1,n)!=1)
            return false;
    }
    return true;
}
main()
{
    lli t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(f(n,n))
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
