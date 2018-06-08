#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int b,n,i,mod=0,p=0;
    char a[100];
    cin>>a>>b;
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        mod=(mod*10)+a[i]-'0';
        if(mod<b && !p) continue;
        cout<<mod/b;
        p=1;
        mod=mod%b;
    }
    return 0;
}
