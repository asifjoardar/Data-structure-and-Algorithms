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
using namespace std;
int bsearch(int a[],int s,int e,int n)
{
	if(s<=e)
	{
		int mid=s+(e-s)/2;
		if(a[mid]==n)
			return mid;
		if(a[mid]>n)
			return bsearch(a,s,mid-1,n);
		return bsearch(a,mid+1,e,n);
	}
	return 0;
}
main()
{
    #ifndef ONLINE_JUDGE
	//freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	int a[]={1,2,3,4,5,6,7,8,9,10};
	int n=sizeof(a)/sizeof(a[0]);
	int x=5;
	int ans=bsearch(a,0,n-1,x);
	if(ans==0)
		cout<<"Element is not present in array\n";
	else
		cout<<"Element is present at index "<<ans<<endl;

}
