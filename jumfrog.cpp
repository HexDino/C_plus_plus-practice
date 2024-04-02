#include <bits/stdc++.h>
using namespace std;
long long n, k, a[100001], b[100001], m = INT_MIN;
long long t = 0;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	freopen("jumfrog.inp", "r", stdin);
	freopen("jumfrog.out", "w", stdout);
	cin >> n >> k;
	for (int i = 1; i <= n; i++) cin >> a[i];
	for (int i = 2; i <= n; i++)
	{
		b[i - 1] = a[i] - a[i - 1];
        t += b[i-1];
	}
	for(int i=1; i<n; i++) m=max(m,b[i]);
	long long dau = 1, cuoi = t, kq = 999999;
	while (dau <= cuoi)
	{
		long long s = (dau + cuoi) / 2, tt = 0, bd = 0,g=0;
		for (int i = 1; i < n; i++)
		{
			if (b[i] > s) goto gg;
		}
		for (int i = 1; i < n; i++)
		{
			tt += b[i]; g = i; if (i == n - 1)bd++;
			if (tt > s)
			{
				bd++; tt = 0;  i--;
			}
			if (bd == k) break;
		}
	    gg:;
		if (bd <= k && bd>=1 && g==n-1) { kq = s; cuoi = s - 1; }
		else dau = s + 1;
	}
	cout<< kq<<'\n';
	return 0;
}
