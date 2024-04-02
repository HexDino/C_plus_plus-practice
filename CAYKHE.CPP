#include<bits/stdc++.h>
using namespace std;
long long a[2002],b[2002],i,n,w,f[2002][2002],j,p[2002],m=0,s=0;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	//freopen("CAYKHE.INP","r",stdin);
    //freopen("CAYKHE.OUT","w",stdout);
	cin>>n>>w;
	for(i=1;i<=n;i++) cin>>a[i]>>b[i];
	f[0][1]=0;
	f[1][0]=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=w;j++) 
		{
		    f[i][j]=f[i-1][j];
			if(b[i]<=j) f[i][j]=max(f[i-1][j],a[i]+f[i-1][j-b[i]]);
		}
	}
	cout<<f[n][w]<<endl;
	/*while(n>0&&w>0)
	{
		if(f[n][w]==f[n-1][w]) n--;
		else
		{
			p[m]=n;
			m++;
			n--;
			w-=b[n];
		}
	}
	cout<<m<<" ";
	for(i=m-1;i>=0;i--) cout<<p[i]<<" ";*/s
	return 0;
}
