#include<iostream>
using namespace std;
int phi[1000006],m[1000006];
void asif(int n)
{
    int i,j;
    for(i=1;i<=n;i++) phi[i]=i;
    phi[1]=1;m[1]=1;
    for(i=2;i<=n;i++)
    {
        if(!m[i])
        {
            for(j=i;j<=n;j+=i)
            {
                m[j]=1;
                phi[j]=(phi[j]/i)*(i-1);
            }
        }
    }
}
main()
{
    int n,i;
    cin>>n;
    asif(n);
    for(i=1;i<=n;i++) cout<<phi[i]<<endl;
}
