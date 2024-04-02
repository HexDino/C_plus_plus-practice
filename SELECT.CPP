#include<bits/stdc++.h>
using namespace std;
int n=1,a[1000010],i,d=1;
int main()
{
	freopen("SELECT.INP","r",stdin);
	freopen("SELECT.OUT","w",stdout);
	while(cin>>a[n]) n++;
	sort(a+1,a+n);
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i+1]) d++;
		else d=1;
		if(d>n/2)
		{
			cout<<a[i];
			return 0;
		}
	}
}
