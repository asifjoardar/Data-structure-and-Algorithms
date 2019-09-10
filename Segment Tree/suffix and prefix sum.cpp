///sopj GSS1 - Can you answer these queries I

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
#define eb emplace_back
#define makep make_pair
#define MOD 1000000007
#define PI 2*acos(0.0)
#define PII pair<ll, ll>
#define pii pair<int, int>
#define what_is(x) cerr<<#x<<" is "<<x<<endl;
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

#define mx 50005
int arr[mx];
struct node{
    int sum,prefx,sufx,ans;
}tree[mx * 4];

node combine (node l, node r) {
        node res;
        res.sum = l.sum + r.sum;
        res.prefx = max (l.prefx, l.sum + r.prefx);
        res.sufx = max (r.sufx, r.sum + l.sufx);
        res.ans = max (max (l.ans, r.ans), l.sufx + r.prefx);
        return res;
}

node make_data (int val) {
        node res;
        res.sum = val;
        res.prefx = res.sufx = res.ans = max(-1000000, val);
        return res;
}
 
void build (int v, int tl, int tr) {
        if (tl == tr)
                tree[v] = make_data(arr[tl]);
        else {
                int tm = (tl + tr) / 2;
                build (v*2, tl, tm);
                build (v*2+1, tm+1, tr);
                tree[v] = combine (tree[v*2], tree[v*2+1]);
        }
}

node query (int v, int tl, int tr, int l, int r) {
        if (l == tl && tr == r)
                return tree[v];
        int tm = (tl + tr) / 2;
        if (r <= tm)
                return query (v*2, tl, tm, l, r);
        if (l > tm)
                return query (v*2+1, tm+1, tr, l, r);
        return combine (
                query (v*2, tl, tm, l, tm),
                query (v*2+1, tm+1, tr, tm+1, r)
        );
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    int n,m,t,i,j,x,y;
    scanf("%d",&n);
    for(j=1;j<=n;j++)
        scanf("%d",&arr[j]);
    build(1, 1, n);
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
        scanf("%d%d",&x,&y);
        node abc=query(1,1,n,x,y);
        printf("%d\n",abc.ans);
    }
    return 0;
}
