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

int dp[500][500];

int ncr(int n,int r)
{
    if(n==r||r==0) return 1;
    if(r==1) return n;
    if(dp[n][r]>-1)
        return dp[n][r];
    return dp[n][r]=ncr(n-1,r-1)+ncr(n-1,r);
}

int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    ll i,j;
    for(i=0;i<500;i++)
        for(j=0;j<500;j++)
            dp[i][j]=-1;
    cout<<ncr(5,0)<<endl;
    return 0;
}
