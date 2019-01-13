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
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int used[20],number[20];


void backtrack(int at,int n)
{
    if(at==n+1)
    {
        for(int i=1;i<=n;i++)
        {
            pf("%d ",number[i]);
        }
        cout<<endl;
        return;
    }
    for(int i=1;i<=n;i++){
        if(!used[i])
        {
            used[i]=1;
            number[at]=i;
            backtrack(at+1,n);
            used[i]=0;
        }
    }
}
main()
{
    backtrack(1,3);
}

/*
OUTPUT:
1 2 3 
1 3 2 
2 1 3 
2 3 1 
3 1 2 
3 2 1 
*/
