#include<bits/stdc++.h>
using namespace std;
long long t, n, last = 1;
int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("kk.inp","r",stdin);
    freopen("kk.out","w",stdout);
    cin >> t;
    for (int i = 1 ; i <= t ; i++) {
        cin >> n;
        long long s= 1, d2 = 0;;
        for (int j = 1 ; j <= n ; j++) {
           long long ii = j;
           while (ii % 2 == 0) {
               d2++;
               ii /= 2;
           }
           while (ii % 5 == 0) {
               d2--;
               ii /= 5;
           }
           s = (s * (ii % 10)) % 10;
           }
           for (int j = 1 ; j <= d2 ; j++) s = (s * 2) % 10;
        cout << s % 10 << '\n';
    }
}
