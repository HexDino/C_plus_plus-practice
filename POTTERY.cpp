#include<bits/stdc++.h>
#define int long long

using namespace std;

const int   N   =   100005  ;

int n, m, T, A[N], B[N];

int ok(int val) {
    int num = 0;
    for (int i = 1; i <= n; i++) { 
        num += val / A[i];
    }
    int rem = T - val;
    int numB = 0; 
    for (int i = 1; i <= m; i++) {
        numB += rem / B[i];
    }
    if (numB >= num) return num;
    else return -1;
}

signed main() {
    freopen("POTTERY.inp", "r", stdin);
    freopen("POTTERY.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> T ;
    cin >> n ;
    for (int i = 1; i <= n; i++) cin >> A[i];
    cin >> m ;
    for (int i = 1; i <= m; i++) cin >> B[i];
    int lo = 0, hi = T, mi, ans = 0;
    //cout << ok(12) << '\n';
    while (lo <= hi) {
        mi = (lo + hi) / 2;
        if (ok(mi) != -1) {
            ans = ok(mi);
            lo = mi + 1;
        }   else {
            hi = mi - 1;
        }
    }
    cout << ans;
}