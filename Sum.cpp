#include<bits/stdc++.h>
using namespace std;
long long n, ans = 0;
int main()
{
    freopen("Sum.inp","r",stdin);
    freopen("Sum.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        ans = ans + n / i;
    }
    cout << ans;
}
