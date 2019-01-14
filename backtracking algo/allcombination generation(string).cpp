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
#define MOD 1000000007
#define PI 3.14159265
#define fio() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int used[5005];
string s;

void backtrack(int at,string str,int n)
{
	if(at==n)
	{
		for(int i=0;i<n;i++)
			cout<<s[i]<<" ";
		cout<<endl;
		return ;
	}

	for(int i=0;i<n;i++)
	{
		if(!used[i])
		{
			used[i]=1;
			s[at]=str[i];
			backtrack(at+1,str,n);
			used[i]=0;
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
	string a;
	cin>>a;
	backtrack(0,a,a.size());
}
