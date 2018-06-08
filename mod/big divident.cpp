#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    long long int b,r=0,i,n;
    char a[100];
    cin>>a>>b;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        r=((r*10)+(a[i]-'0'))%b;
    }
    cout<<r<<endl;
    return 0;
}
