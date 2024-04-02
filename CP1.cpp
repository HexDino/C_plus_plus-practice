#include<bits/stdc++.h>
using namespace std;
long long t, n, bang;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("CP1.inp","r",stdin);
    freopen("CP1.out","w",stdout);
    cin >> t;
    for (int i = 1 ; i <= t ; i++) {
        cin >> n;
        bang = sqrt(n);
        cout << bang * bang << '\n';
    }
}
