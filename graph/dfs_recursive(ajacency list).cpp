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
#define PI 3.141592653589793
#define white 1
#define gray 2
#define black 3
#define PII pair<ll, ll> 
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

vector<vector<int>>adj(105);
int vis[105],node,edge;

void dfs(int sn)
{
    cout<<sn<<" ";
    for(int i=0;i<adj[sn].size();i++)
    {
        if(vis[adj[sn][i]]==0)
        {
            vis[adj[sn][i]]=1;
            dfs(adj[sn][i]);
        }
    }
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int x,y,i;
    cin>>node>>edge;
    for(i=0;i<edge;i++)
    {
        cin>>x>>y;
        //when graph is undirected
        adj[x].pb(y);
        adj[y].pb(x);

        //when graph is directed
        //adj[x].pb[y];
    }
    for(i=0;i<node;i++)
    {
        if(vis[i]==0)
        {
            vis[i]=1;
            dfs(i);
            cout<<endl;
        }
    }
}
