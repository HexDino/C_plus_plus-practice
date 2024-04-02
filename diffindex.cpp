#include<bits/stdc++.h>
using namespace std;
long long t, n, a[200001],c[200001], dem, ans;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("diffindex.inp","r",stdin);
    freopen("diffindex.out","w",stdout);
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
            c[i]=a[i]-i;
        }
        sort(c+1,c+n+1);
        ans = 0;
        dem = 0;
        c[n+1]=1000000001;
        for (int i =1; i<=n; i++)
        {
            if(c[i]==c[i+1]) dem++;
            else
            {
                dem++;
                ans+=dem*(dem-1)/2;
                dem = 0;
            }
        }
        cout<<ans<<'\n';
    }
}
