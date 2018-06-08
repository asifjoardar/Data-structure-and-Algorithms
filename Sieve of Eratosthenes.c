#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j;
    int a[101];
    for(i=0;i<=100;i++)
    {
        a[i]=1;
    }
    a[0]=0;a[1]=0;a[2]=1;
    for(i=4;i<100;i+=2)
        a[i]=0;
    for(i=3;i<=100;i++)
    {
        if(a[i]!=0)
        {
            for(j=3;j*i<=100;j++)
            {
                a[i*j]=0;
            }
        }
    }
    for(i=1;i<=100;i++)
    {
        if(a[i]!=0)
            printf("%d\n",i);
    }
}
