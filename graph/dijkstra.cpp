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
#define fs first
#define ss second
#define endl "\n"
#define pb push_back
#define makep make_pair
#define MOD 1000000007
#define PI acos(-1.0)
#define PII pair<ll , ll>
#define ki_ase(x,y) cout<<x<<" "<<y<<endl;
#define SIZE 200000000
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
ll fx[]={1,0,-1,0,-1,-1,1,1};
ll fy[]={0,1,0,-1,-1,1,-1,1};

ll infinity=(1<<30);

void dijstkra(ll n, vector<ll>g[], vector<ll>cost[], ll s){
    ll dist[n+1],i;
    for(i=1;i<=n;i++)
        dist[i]=infinity;
    priority_queue<pair<ll,ll>>q;
    dist[s]=0;
    q.push({0,s});

    while(!q.empty()){
        auto top=q.top();
        q.pop();
        ll u=top.second;

        for(i=0;i<g[u].size();i++){
            ll v=g[u][i];
            if(dist[u]+cost[u][i]<dist[v]){
                dist[v]=dist[u]+cost[u][i];
                q.push({dist[v],v});
            }
        }
    }
    for(i=1;i<=n;i++){
        cout<<s<<" --> "<<i<<" = "<<dist[i]<<endl;
    }
}

int main()
{
    fio();
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll node,edge,i,u,v,w,s;
    vector<ll>g[10000],cost[10000];
    cin>>node>>edge;
    for(i=0;i<edge;i++){
        cin>>u>>v>>w;
        g[u].pb(v);
        g[v].pb(u);
        cost[u].pb(w);
        cost[v].pb(w);
    }
    cin>>s;
    dijstkra(node,g,cost,s);
    return 0;
}
