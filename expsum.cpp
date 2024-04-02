#include <bits/stdc++.h>
using namespace std;
long long n, s, t, a[51], ans;
void Try(int i,int s)
{
    if(ans == 1) return;
    for(int k = 0 ; k <= s/a[i] ; k++)
    {
        if(s - k*a[i] == 0) {ans = 1; return;}
        if(i < n)
        Try(i+1,s - k*a[i]);
    }
}
int solve()
{
    ans =0;
    Try(1,s);
    return ans;
}
int main ()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("expsum.inp","r",stdin);
    freopen("expsum.out","w",stdout);
    int t;
    cin >> t;
    while(t--)
    {
        cin>>n>>s;
        for (int i=1; i<=n; i++) cin>>a[i];
        cout << solve()  << '\n';
    }
}
