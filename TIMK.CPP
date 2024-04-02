#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,k=0,s=1,i;
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("TIMK.INP","r",stdin);
	freopen("TIMK.OUT","w",stdout);
	cin>>n>>m;
	for(i=2;i<=n;i++)
	{
		s*=i;
		while(s%m==0)
		{
			s/=m;
			k++;
		}
	}
	cout<<k;
	return 0;
}
