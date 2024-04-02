#include<bits/stdc++.h>
using namespace std;
long long n, t, a[200001], x;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tk2.inp","r",stdin);
    freopen("tk2.out","w",stdout);
   cin >> n >> t;
   for (int i = 1 ; i <= n ; i++) {
    cin >> a[i];
   }
   sort(a+1,a+n+1);

   for (int i = 1 ; i <= t; i++) {
    cin >> x;
    if (x <= a[1]) {cout << n << '\n';continue;}
    if (x > a[n]) {cout << 0 << '\n';continue;}
    long long l = 1, r = n, mid, ans;
    while (l <= r) {
        mid = (l+r) / 2;
        if (x <= a[mid]) {
            ans = mid;
            r = mid - 1;
        }
        else l = mid + 1;
    }
   // if (a[mid] >= x) mid--;
    cout << n - ans + 1 << '\n';
   }
   return 0;
}

