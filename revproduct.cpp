#include <bits/stdc++.h>
using namespace std;
long long n;
long long a[5001], b[5001];
long long dp[5001][5001];
long long s[5001];
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("revproduct.inp","r",stdin);
    freopen("revproduct.out","w",stdout);
    cin>>n;
    for (int i=1; i<=n; i++) cin>>a[i];
    for (int i=1; i<=n; i++) cin>>b[i];
    for (int l=1; l<=n; l++)
    {
        dp[l][l] = a[l] * b[l];
    }
    for (int l=1; l<n; l++)
    {
        dp[l][l+1] = a[l+1] * b[l] + a[l] * b[l+1];
    }
    for (int l=n-2; l>=1; l--)
    {
        for (int r=l+2; r<=n; r++)
        {
            dp[l][r] = dp[l+1][r-1] + a[r]*b[l] + b[r]*a[l];
        }
    }
    for (int i=1; i<=n; i++)
    {
        s[i] = s[i-1] + a[i] * b[i];
    }
    long long ans=-1e9, tmp;
    for (int l=1; l<=n; l++)
    {
        for (int r=l; r<=n; r++)
        {
            tmp = s[l-1] + (s[n] - s[r]) + dp[l][r];
            ans  =max(ans, tmp);
        }
    }
    cout<<ans;
}
