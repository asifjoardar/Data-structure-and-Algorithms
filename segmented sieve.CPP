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
vector<ll>prime;
void sieve()
{
	ll i,j;
	ll p[32000]={0};
	for(i=2;i<32000;i+=2) p[i]=1;
	prime.push_back(2);
	for(i=3;i<32000;i+=2)
	{
		if(p[i]==0){
			prime.push_back(i);
			for(j=3;i*j<32000;j++)
				p[i*j]=1;
		}
	}
}

void segsieve(ll l,ll r)
{
	ll ans[r-l+1]={0};
	ll i,j,x,cp;

	for(i=0;prime[i]*prime[i]<r;i++)
	{
		cp=prime[i];
		x=(l/cp)*cp;
		if(x<l)
			x+=cp;
		for(j=x;j<=r;j+=cp){
			ans[j-l]=1;
		}
		if(x==cp) ans[x-l]=0;
	}
	if(l==1) ans[0]=1;
	for(i=0;i<(r-l+1);i++)
		if(ans[i]==0)
			cout<<l+i<<endl;
}

main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	fio();
	sieve();
	ll t,l,r;
	cin>>t;
	while(t--)
	{
		cin>>l>>r;
		segsieve(l,r);
		cout<<endl;
	}
}
