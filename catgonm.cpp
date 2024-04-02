#include<bits/stdc++.h>
using namespace std;
long long n, a[100001], sum = 0, m;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("catgonm.inp","r",stdin);
    freopen("catgonm.out","w",stdout);
    cin >> n >> m;
    for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        sum+= a[i];
    }
    long long moc = sum / m;
    for (long long i = moc ; i >= 1 ;i--)
    {
        long long ans = 0;
        for (int j = 1 ; j <= n ; j++)
        {
            ans += a[j] / i;
        }
        if (ans >= m) {cout << i;return 0;}
    }
}
