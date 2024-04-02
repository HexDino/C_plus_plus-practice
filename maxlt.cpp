#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], t= 0, ma = -1000000000001;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("maxlt.inp","r",stdin);
    freopen("maxlt.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        ma = max(ma, a[i]);
    }
    for (int i = 1 ; i <= n ; i++) {
        t = t + a[i];
        ma = max(ma, t);
        if(t < 0) t = 0;
    }
    cout << ma;
}
