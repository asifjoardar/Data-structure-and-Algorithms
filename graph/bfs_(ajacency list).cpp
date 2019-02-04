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
int vis[105],node,edge,dis[105],parent[105];

void bfs(int sn)
{
    for(int i=0;i<node;i++)
    {
    	parent[i]=0;
    	dis[i]=-1;
    	vis[i]=0;
    }
    parent[sn]=0;
    dis[sn]=0;
    vis[sn]=1;
    queue<int>q;
    q.push(sn);
    while(!q.empty())
    {
    	int x=q.front();
    	q.pop();
    	cout<<x<<" ";
    	for(int i=0;i<adj[x].size();i++)
    	{
    		if(vis[adj[x][i]]==0)
    		{
    			vis[adj[x][i]]=1;
    			parent[adj[x][i]]=x;
    			dis[adj[x][i]]=dis[x]+1;
    			q.push(adj[x][i]);
    		}
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
    bfs(1);
    cout<<endl;
}
