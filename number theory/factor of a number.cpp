#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
    int a[100],n,i,j=0;
    cin>>n;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            a[j++]=i;
            if(i!=sqrt(n)) a[j++]=n/i;
        }
    }
    sort(a,a+j);
    for(i=0;i<j;i++) cout<<a[i]<<endl;
    return 0;
}
