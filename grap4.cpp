#include<bits/stdc++.h>
using namespace std;
long long a[10000][10000],b[1000],tr[1000],n,m,u,p,i,s,c,dem=0,d;
void BFS(long long v)
{
	b[v]=1;
	queue <int> q;
	q.push(v);
	while(!q.empty())
	{
		p=q.front();
		q.pop();
		for(u=1;u<=n;u++)
		{
		    if(a[p][u]==1&&b[u]==0)
		    {b[u]=1;q.push(u);}
		}
	}
}
int main()
{
	freopen("grap4.inp","r",stdin);
	freopen("grap4.out","w",stdout);
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
	    cin>>c>>d;
	    a[c][d]=1;
	    a[d][c]=1;
    }
for(i=1;i<=n;i++)
{
if(b[i]==0){BFS(i);dem++;}
} cout<<m-n+dem;
}
