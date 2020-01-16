/** BiSmIlLaHiR rAhMaNiR rAhIm **\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
            \**  DIIT(17th batch) **/

#include<bits/stdc++.h>
#define ll long long int
#define ul unsigned long long int
#define pf printf
#define sf scanf
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll, ll>
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

ll bsearch(ll a[],ll l,ll r,ll num,vector<ll>&t)
{
    while(r-l>1){
        ll mid=(l+r)/2;
        if(a[t[mid]]>=num)
            r=mid;
        else
            l=mid;
    }
    return r;
}

ll lis(ll a[],ll n)
{
    ll len=1,i;
    vector<ll>t(n,0),p(n,-1);
    for(i=1;i<n;i++)
    {
        if(a[i]<a[t[0]])
        {
            t[0]=i;
        }
        else if(a[i]>a[t[len-1]])
        {
            p[i]=t[len-1];
            t[len++]=i;
        }
        else
        {
            ll pos=bsearch(a,-1,len-1,a[i],t);
            p[i]=t[pos-1];
            t[pos]=i;
        }
    }
    return len;
}

int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    ll i,n;
    sf("%lld",&n);
    ll a[n];
    for(i=0;i<n;i++)
        sf("%lld",&a[i]);
    pf("%lld\n",lis(a,n));
    return 0;
}
