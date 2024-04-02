#include<bits/stdc++.h>
using namespace std;
long long m, n, t[100002], g[100001];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("flower.inp","r",stdin);
    freopen("flower.out","w",stdout);
    cin >> m >> n;
    for (int i = 2 ; i <= m + 1 ; i++) cin >> t[i];
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> g[i];
    }
    t[1] = 0;
    sort(t+1,t+m+1+1);
    for (int i = 1 ; i <= n ; i++)
    {
        int l = 1, r = m + 1, ans = -1, mid;
        while (l <= r)
        {
           mid = (l + r) / 2;
           if (t[mid] < g[i]) {ans = mid; l = mid + 1;}
           else
           {
               r = mid - 1;
           }
        }
        cout << m + 1 - ans << ' ';
    }
}
