#include<bits/stdc++.h>
using namespace std;
long long n, k, a[400005], i, j, cnt, ans = 0;
map<int,int> m;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("subarr.inp","r",stdin);
    freopen("subarr.out","w",stdout);
    cin >> n >> k;
    for (int y = 1 ; y <= n ; y++)
    {
       cin >> a[y];
    }
    i = 1;
    j = 1;
    cnt = 0;
    m[a[j]] = 1;
    if (k == 1) cnt = 1; else cnt = 0;
    while (j <= n)
    {
        if (cnt == 0)
        {
            j++;
            m[a[j]]++;
            if (m[a[j]] >= k) cnt++;
        }
        //cnt chi co 0 hoac 1

        cout << cnt << '\n';
        if (cnt > 0)
        {
            ans = ans + n - j + 1;
           // cout << j << '\n';
            if (m[a[i]] == k) cnt--; // i0...j thi chi co a[i0] la lap k lan
            m[a[i]]--;
            i++;
            cout << cnt << '\n';
        }
    }
    cout << ans;
}
