#include<bits/stdc++.h>
using namespace std;
long long n, x, dem = 0;
int main()
{
    freopen("MaxPow.inp","r",stdin);
    freopen("MaxPow.out","w",stdout);
    cin >> n >> x;
    while (n % x == 0) {
        dem++;
        n /= x;
    }
    cout << dem;
}
