#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], ma = 0, d = 0, l = 1;
map<int,int> m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("twovals.inp","r",stdin);
   freopen("twovals.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for (int r = 1 ; r <= n ; r++)
    {
        m[a[r]]++;
        if (m[a[r]] == 1) d++;
        if (d == 2) ma = max(r - l + 1,ma);
        if (d >= 3)
        {
            while (d > 2)
            {
                ma = max(r - l, ma);
                m[a[l]]--;
                if (m[a[l]] == 0) d--;
                l++;
                if (d == 2) break;
            }
        }
    }
    cout << ma;
}
