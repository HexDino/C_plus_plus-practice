#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n, mi = 1000000, a[10001], dem = 0;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sprime.inp","r",stdin);
    freopen("sprime.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 0 ; i < 1<<n  ; i++)
    {
        b = bitset<20> (i);
        int so0 = 0, so1 = 0;

        for (int j = n - 1 ; j >=0 ;j--)
        {
            if (b[j] == 0) so0 += a[j+1];
        }
        if (so0 < 2) continue;
        int t = 1;
        for (int j = 2 ; j <= sqrt(so0) ; j++)
        {
            if (so0 % j == 0) {t = 0;break;}
        }
        if (t==1) dem++;

    }
    cout << dem;
}
