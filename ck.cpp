#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n, mi = 1000000, a[10001];
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("ck.inp","r",stdin);
    freopen("ck.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 1 ; i < 1<<n - 1 ; i++)
    {
        b = bitset<20> (i);
        int so0 = 0, so1 = 0;
        for (int j = n - 1 ; j >=0 ;j--)
        {
            if (b[j] == 0) so0 += a[j+1];
            if (b[j] == 1) so1 += a[j+1];
        }
        mi = min(mi, abs(so0 - so1));
    }
    cout << mi;
}
