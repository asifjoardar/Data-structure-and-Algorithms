#include<iostream>
using namespace std;
int asif(int a,int b,int c)
{
    int i,x;
    if(b==0) return 1;
    else if(b%2==0)
    {
        x=asif(a,b/2,c);
        return (x%c*x%c)%c;
    }
    else
    {
        return (a%c*(asif(a,b-1,c)%c))%c;
    }
}
main()
{
    int a,b,c,x;
    cin>>a>>b>>c;
    x=asif(b,c-2,c);
    cout<<a*x<<endl;
}
