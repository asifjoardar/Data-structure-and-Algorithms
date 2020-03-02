/********** BiSmIlLaHiR rAhMaNiR rAhIm ***********\
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
*$*                                             *$*
*$*    ||||||||  ||||||||  ||||||||  ||||||||   *$*
*$*    ||    ||  ||           ||     ||         *$*
*$*    ||||||||  ||||||||     ||     ||||||     *$*
*$*    ||    ||        ||     ||     ||         *$*
*$*    ||    ||  ||||||||  ||||||||  ||         *$*
*$*                                             *$*
*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*$*
\*************** DIIT(17th batch) ****************/

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

ll sol(ll a[],ll n)
{
    ll mul=1,ans=0,i,j;
    for(i=0;i<30;i++)
    {
        ll count=0;
        bool cnt=0;
        for(j=0;j<n;j++)
        {
            if((a[j] & (1<<i))>0)
            {
                if(cnt)
                    count++;
                else{
                    cnt=1;
                    count++;
                }
            }
            else if(cnt)
            {
                ans+=((mul*count*(count+1))/2);
                cnt=0;
                count=0;
            }
        }
        if(cnt)
        {
            ans+=((mul*count*(count+1))/2);
            cnt=0;
            count=0;
        }
        mul*=2;
    }
    return ans;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;
    sf("%lld",&t);
    while(t--)
    {
        ll n,i;
        sf("%lld",&n);
        ll a[n];
        for(i=0;i<n;i++)
            sf("%lld",&a[i]);
        pf("%lld\n",sol(a,n));
    }
    return 0;
}
// ! ()
