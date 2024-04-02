#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+10 ;
const int oo = 1e9+7;
long long n,a[N],w1,w2,res,tmp,f[N], F[1000][1000],b[5];
void read()
{
	cin >> n >> w1 >> w2;
	for(int i  = 1; i <= n ; i++)
    {
        cin >> a[i];
    }
	b[0] = w1;
	b[1] = w2;
	b[2] = 1;
	b[3] = w2;
	b[4] = w1;
}
void solve1()
{
	for(int i = 1 ; i <= n ; i++)
	{
		for(int t = 0 ; t < 5 ; t++)
		{
			if(t >= i)
			{
				if(t == i) F[i][t] = -oo;
				else F[i][t] = F[i-1][t];

				F[i][t] = max(F[i][t] , F[i-1][t-1] + b[t]*a[i]);
			}
		}
	}
}

void solve()
{
	if(n == 5)
	{
		cout << a[1] * w1 + a[2] * w2 + a[3] + a[4] * w2 + a[5] * w1;
		return;
	}
	for(int k = 0 ; k < 5 ; k++)
	{
		for(int i = n ; i >= 1 ; i--)
		{
			f[i] = b[k] * a[i] + f[i-1];
		}
		for(int i = 1 ; i <= n ; i++)
		{
			f[i] = max(f[i],f[i-1]);
		}
	}

	cout << f[n];
}

int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("fiveset.inp","r",stdin);
    freopen("fiveset.out","w",stdout);
	read();
	solve();
}
