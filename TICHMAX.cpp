#include <bits/stdc++.h>

using namespace std;

long long a[100010];

int main() {
    freopen("TICHMAX.INP","r",stdin);
    freopen("TICHMAX.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    int n;
    cin >> n;
    for (int i = 1 ; i <= n ; ++i) cin >> a[i];
    sort(a+1,a+n+1);
    vector < long long > b;
    long long ans = -1e18;
    b.push_back(a[1]);
    b.push_back(a[2]);
    b.push_back(a[3]);
    b.push_back(a[n]);
    b.push_back(a[n-1]);
    b.push_back(a[n-2]);
    sort(b.begin(),b.end());
    do { ans = max(ans,b[1] * b[2] * b[3]);
    } while(next_permutation(b.begin(),b.end()));
    cout << ans;
}
