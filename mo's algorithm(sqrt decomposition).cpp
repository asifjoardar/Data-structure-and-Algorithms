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

ll a[200005],sum,d;

struct Query{
    ll l,r,indx;
};

bool cmp(Query x,Query y)
{
    if(x.l/d != y.l/d)
        return x.l/d < y.l/d;
    return x.r < y.r;
}

void add(ll i)
{
    sum+=a[i];
}
void remove(ll i)
{
    sum-=a[i];
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll n,i,q;
    cin>>n;
    d=ceil(sqrt(n*1.0));
    for(i=0;i<n;i++)
        cin>>a[i];
    cin>>q;
    Query qry[q];
    ll ans[q];
    for(i=0;i<q;i++)
    {
        cin>>qry[i].l>>qry[i].r;
        qry[i].indx=i;
    }
    sort(qry,qry+q,cmp);
    ll l=0,r=-1;
    for(i=0;i<q;i++)
    {
        while(r<qry[i].r)
            add(++r);
        while(r>qry[i].r)
            remove(r--);
        while(l<qry[i].l)
            remove(l++);
        while(l>qry[i].l)
            add(--l);
        ans[qry[i].indx]=sum;
    }
    for(i=0;i<q;i++)
        cout<<ans[i]<<endl;
    return 0;
}
// ! ()
