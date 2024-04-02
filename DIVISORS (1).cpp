#include <bits/stdc++.h>

using namespace std;

int pr[] = { 2 , 3 , 5 , 7 , 11 , 13 , 17 , 19};
int d[10];

int main() {
    freopen("DIVISORS.INP","r",stdin);
    freopen("DIVISORS.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; ++i) {
        int x = i;
        int k = 0;
        while (k < 8) {
            while (x % pr[k] == 0) {
                x /= pr[k];
                d[k]++;
            }
            k++;
        }
    }
    long long ans = 1;
    for (int i = 0 ; i < 8 ; ++i)
        ans *= (d[i] + 1);
    cout << ans - 1;
}
