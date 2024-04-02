#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], f[1000001], ma = 0;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("delnum.inp","r",stdin);
    freopen("delnum.out","w",stdout);
   cin >> n;
   for (int i = 1 ; i <= n ; i++) cin >> a[i];
   sort(a+1,a+n+1);
   f[1] = 1;
   for (int i = 2 ; i <= n ; i++) {
        f[i] = 1;
    for (int j = 1 ; j < i ; j++) {
        if (a[i] % a[j] == 0) f[i] = max(f[i], f[j] + 1);
        ma = max(ma, f[i]);
    }
   }
   cout << n - ma;
}
