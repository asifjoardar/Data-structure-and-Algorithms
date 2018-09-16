#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll status[(100000001/32)+2];
ll N=100000001,p[100000001],k=1;
bool Check(ll N,ll pos){
    return (bool)(N & (1<<pos));
}
ll Set(ll N,ll pos){
    return N=N | (1<<pos);
}
void sieve()
{
	 ll i, j, sqrtN;
     sqrtN = (ll)( sqrt( N ) );
     for( i = 3; i <= sqrtN; i += 2 )
     {
		 if( Check(status[i>>5],i&31)==0)
		 {
	 		 for( j = i*i; j <= N; j += (i<<1) )
			 {
				 status[j>>5]=Set(status[j>>5],j & 31)   ;
	 		 }
		 }
	 }
	 p[0]=2;
	 for(i=3;i<=N;i+=2)
		 if( Check(status[i>>5],i&31)==0)
	 	 p[k++]=i;
}
main(){
        sieve();
        for(ll i=0;i<k;i+=100)
        cout<<p[i]<<endl;
}
