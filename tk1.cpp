#include<bits/stdc++.h>
using namespace std;
long long n, t, a[1000001], x;
map<long long,long long> m;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tk1.inp","r",stdin);
    freopen("tk1.out","w",stdout);
   cin >> n >> t;
   for (int i = 1 ; i <= n ; i++) {
    cin >> a[i];
    m[a[i]]++;
   }
   for (int i = 1 ; i <= t ; i++) {
    cin >> x;
    cout << m[x] << '\n';
   }
}
