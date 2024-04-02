#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[1010],i,j,s=0,k,d,e,z;
	freopen("BAI3.INP","r",stdin);
	freopen("BAI3.OUT","w",stdout);
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		s+=a[i];
	} 
	for(i=n;i>=2;i--)
	{
		if(s%i!=0) continue;
		k=s/i;
		z=1;
		e=0;
		for(j=1;j<=i;j++)
		{
			d=0;
			while(z<=n&&d!=k) 
			{
				d+=a[z];
				z++;
			}
			if(d==k) e++;
		}
		if(e==i)
		{
			cout<<e<<" "<<k;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}
