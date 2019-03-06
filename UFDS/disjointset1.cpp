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
#define SIZE 1000005
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int parent[100];
int rankparent[100];

void initializeset(int n)
{
    for(int i=0;i<n;i++)
    {
        parent[i]=i;
        rankparent[i]=1;
    }
}

int findparent(int x)
{
    if(x!=parent[x])
        return parent[x]=findparent(parent[x]);
    else
        return x;
}

void unionset(int x,int y)
{
    int px=findparent(x);
    int py=findparent(y);
    if(px==py) return;
    if(rankparent[px]<rankparent[py]){
        parent[px]=py;
        rankparent[py]+=rankparent[px];
    }
    else if(rankparent[px]>=rankparent[py]){
        parent[py]=px;
        rankparent[px]+=rankparent[py];
    }
}

void printset(int n)
{
    for(int i=0;i<n;i++)
        cout<<"node is "<<i<<" parent is "<<parent[i]<<" rank is "<<rankparent[i]<<endl;
}

main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    int n;
    cin>>n;
    initializeset(n);
    unionset(0,1);
    unionset(4,2);
    unionset(3,1);
    unionset(0,3);
    unionset(0,4);
    printset(n);
}

/*

node is 0 parent is 0 rank is 5
node is 1 parent is 0 rank is 1
node is 2 parent is 4 rank is 1
node is 3 parent is 0 rank is 1
node is 4 parent is 0 rank is 2

*/
