#include <bits/stdc++.h>
using namespace std;
#define tt "2"
int n;
int a[1000001];
int main()
{
	freopen("test"tt"/duaxe.inp","r",stdin);
	freopen("test"tt"/duaxe.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i];
		a[n+1]=0;
	int l=1,m,r,ans=0;
	for(int i=2;i<=n;i++)
		if(a[i]<a[i+1] and a[i]<a[i-1]) m=i;
		else
			if(a[i]>a[i+1] and a[i]>a[i-1])
			{
				r=i;
				int vt=lower_bound(a+m,a+r+1,a[l])-a;
				vt-=(vt>r);
				vt-=(a[vt]>a[l]);
				//cout<<l<<" "<<m<<" "<<vt<<" "<<r<<endl;
				ans+=a[r]-a[vt];
				l=i;
			}
	cout<<ans;
}