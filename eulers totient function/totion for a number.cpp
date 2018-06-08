#include<iostream>
#include<cmath>
using namespace std;
int a[1000006];
int asif(int n)
{
    int i,j=0;
    while(n%2==0)
    {
        n=n/2;
        a[0]=2;
    }
    j++;
    for(i=3;i<=sqrt(n);i+=2)
    {
        while((n%i)==0)
        {
            n=n/i;
            a[j]=i;
        }
        j++;
    }
    if(n>2)
        a[j++]=n;
        return j;
}
main()
{
    int i,n,j;
    double sum=1.00;
    cin>>n;
    j=asif(n);
    for(i=0;i<j;i++)
    {
        sum=sum*((a[i]-1.00)/a[i]*1.00);
    }
    cout<<n*sum<<endl;
}
