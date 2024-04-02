#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,a[100],i,j,s;
	freopen("J.INP","r",stdin);
	freopen("J.OUT","w",stdout);
	cin>>t;
	for(i=1;i<=t;i++)
	{
		cin>>n;
		for(i=1;i<=n;i++) cin>>a[i];
		sort(a+1,a+n+1);
		s=0;
		if(n%2==0)
		{
			for(i=n;i>=1;i-=2) s=s+a[i]-a[i-1];
		}
		else
		{
			for(i=n;i>=2;i-=2) s=s+a[i]-a[i-1];
			s=s+a[1];
		}
		cout<<s<<endl;
	}
	return 0;
}
