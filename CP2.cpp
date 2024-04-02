#include<bits/stdc++.h>
using namespace std;
long long t, n, bang;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CP2.inp","r",stdin);
    freopen("CP2.out","w",stdout);
    cin >> t;
    for (int i = 1 ; i <= t ; i++) {
        cin >> n;
        bang = sqrt(n);
        if (bang * bang == n) {cout << n << '\n';} else cout << (bang + 1) * (bang + 1) << '\n';
    }
}

