#include<bits/stdc++.h>
using namespace std;
bool check(long long n) {
   long long t = sqrt(n);
   if (t * t == n) return true;else return false;
}
long long t, n;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("RGC.inp","r",stdin);
    freopen("RGC.out","w",stdout);
   cin >> t;
   for (long long i = 1 ; i <= t ; i++) {
      cin >> n;
      for (long long i = sqrt(n) ; i >= 1 ; i--) {
          if (n % (i*i) == 0) {
            cout << i << ' ' << n / (i * i) << '\n';break;
          }
      }
   }
}
