#include<bits/stdc++.h>
using namespace std;
long long a[1000000], n, t[1000000], maxx = 0, sum = 0, d = 0;
int main()
{
    freopen("bucket.inp", "r", stdin);
    freopen("bucket.out", "w", stdout);
    cin>>n;
    for(int i = 1; i <= n; i++) cin>>a[i],sum += a[i];
    t[0] = 1;
    for(int i=1; i<= n; i++)
    {
        for(int j = maxx; j >= 0; j--)
        if (t[j] == 1) t[j + a[i]] =1;
        maxx += a[i];
    }
    for(int i = 1; i <= sum; i++)
        if (t[i] == 1) d ++;
    cout<<d;
}
