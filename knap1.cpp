#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n, m, w[21], c[21];
long long ma = 0;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("knap1.inp","r",stdin);
    freopen("knap1.out","w",stdout);
    cin >> n >> m;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> w[i] >> c[i];
    }
    for (int i = 0 ; i < 1<<n ; i++)
    {
        b = bitset<20> (i);
        long long kl = 0, gt = 0;
        for (int j = n - 1 ; j >= 0 ; j--)
        {
            if (b[j] == 1) {
                kl += w[j+1];
                gt += c[j+1];
            }
        }
        if (kl <= m) ma = max(ma, gt);
    }
    cout << ma;
}
