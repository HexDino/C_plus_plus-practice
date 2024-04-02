#include<bits/stdc++.h>
using namespace std;
double mi = 100000001,ans, x;
int a[200001];
long long s[200001];
int n;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("insurance.inp","r",stdin);
    freopen("insurance.out","w",stdout);
    cin >> n;
    s[0] = 0;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    x = 1.0*a[n] / 2;
    mi = n * x;
    for (int i = 1 ; i <= n ; i++) s[i] = s[i-1] + a[i];
    for (int i = 1 ; i <= n ; i++)
    {
         x = 1.0*a[i] / 2;
         double cc = s[n] - s[i-1];
        if (mi > cc + (2*(i-1) - n) * x)
        {
            mi = cc + (2*(i-1) - n) * x;
            ans = x;
        }
    }
    cout << fixed<< setprecision(1) << mi << '\n';
}
