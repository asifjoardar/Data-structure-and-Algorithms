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
const ll SIZE=100000000;
vector <ll> prime;
char sieve[SIZE];
void primeSieve ( ll n ) {
    sieve[0] = sieve[1] = 1;
 
    prime.push_back(2);
    for ( ll i = 4; i <= n; i += 2 ) sieve[i] = 1;
 
    int sqrtn = sqrt ( n );
    for ( ll i = 3; i <= sqrtn; i += 2 ) {
        if ( sieve[i] == 0 ) {
            for ( ll j = i * i; j <= n; j += 2 * i ) sieve[j] = 1;
        }
    }
 
    for ( ll i = 3; i <= n; i += 2 ) if ( sieve[i] == 0 ) prime.push_back(i);
}


int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    primeSieve((ll)100000000);
    for(ll i=0;i<10;i++)
        cout<<prime[i]<<endl;
}

