#include<bits/stdc++.h>
using namespace std;
int n, a[1000001], b[1000001], c[1000001], i, ii, iii, dem = 0;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("specsort.inp","r",stdin);
    freopen("specsort.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) cin >> a[i];
    for (int i = 1 ; i <= n ; i++) cin >> b[i];
    for (int i = 1 ; i <= n ; i++) cin >> c[i];
    sort(a+1,a+n+1);
    sort(b+1,b+n+1);
    sort(c+1,c+n+1);
    i = 1; ii = 1; iii = 1;
    while (i <= n && ii <= n && iii <= n)
    {
        if (a[i] < b[ii] && b[ii] < c[iii]) {dem++;i++;ii++;iii++;}
        while (a[i] >= b[ii]) ii++;
        while (b[ii] >= c[iii]) iii++;
    }
    cout << dem;
}
