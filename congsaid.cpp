#include <bits/stdc++.h>
using namespace std;
int n, d, ans=1, x, temp;
map <int, int> m;
int main ()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("congsaid.inp","r",stdin);
    freopen("congsaid.out","w",stdout);
    cin>>n>>d;
    for (int i=1; i<=n; i++)
    {
        cin>>x;
        m[x] = temp = m[x-d] + 1;
        ans=max(ans, temp);
    }
    cout<<n-ans;
}
