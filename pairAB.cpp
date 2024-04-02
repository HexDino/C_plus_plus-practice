#include<bits/stdc++.h>
using namespace std;
int n, a[200001], b[200001], c[200001], ans, sum = 0;
int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("pairAB.inp","r",stdin);
   // freopen("pairAB.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> b[i];
    }
    for (int i = 1 ; i <= n ; i++) c[i] = a[i] - b[i];

    sort(c+1,c+n+1);
    for (int i = 1 ; i <= n ; i++) cout << c[i] << ' ';
    cout << '\n';
    for (int i = 1 ; i <= n; i++)
    {
        int l = 1, r = n, mid, an,ii = 0;
        while (l <= r)
        {
            mid = (l+r) / 2;
            if (c[mid] < -c[i]) {ii = mid;l = mid + 1;}
            else r = mid - 1;
        }
        cout << i << ' ' << ii << '\n';
        if (i > ii) sum += i - ii - 1;
    }
    cout << sum ;
}
