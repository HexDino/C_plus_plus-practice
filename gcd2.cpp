#include<bits/stdc++.h>
using namespace std;
long long n, a[200001], ma = 0;
map<int,int> m;
int main() {

   ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("gcd2.inp","r",stdin);
    freopen("gcd2.out","w",stdout);
   cin >> n;
   for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        for (int j = 1 ; j <= sqrt(a[i]) ; j++) {
            if (a[i] % j == 0) {m[j]++;m[a[i] / j]++;}
        }
        int t = sqrt(a[i]);
        if (t * t == a[i]) m[t]--;
   }

   for (int i = 1000000 ; i >= 1 ; i--) {
    if (m[i] > 1) {cout << i;return 0;}
   }

}
