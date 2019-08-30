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

vector<ll> createtemparray(string pattern)
{
    vector<ll>lps(pattern.size());
    ll index=0;
    for(ll i=1;i<pattern.size();)
    {
        if(pattern[index]==pattern[i])
        {
            lps[i]=i+1;
            index++;
            i++;
        }
        else
        {
            if(index!=0) index=lps[index-1];
            else lps[i]=0,i++;
        }
    }
    return lps;
}
void kmp(string text,string pattern)
{
    vector<ll>lps=createtemparray(pattern);
    ll i=0,j=0;
    bool f=false;
    while(i<text.size())
    {
        if(text[i]==pattern[j])
        {
            i++,j++;
        }
        else
        {
            if(j!=0){
                j=lps[j-1];
            }
            else
                i++;
        }
        if(j==pattern.size())
        {
            cout<<"found\n";
            f=true;
            cout<<"index = "<<i-pattern.size()<<endl;
            j=lps[j-1];
        }
    }
    if(!f)
        cout<<"not found\n";
}

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    fio();
    string pattern,text;
    cin>>text>>pattern;
    kmp(text,pattern);
}
