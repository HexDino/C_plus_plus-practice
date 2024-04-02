#include<bits/stdc++.h>
using namespace std;
long long a,b,n,m,ma = -1;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("gcdseg.inp","r",stdin);
    freopen("gcdseg.out","w",stdout);
    cin >> a >> b >> n >> m;
    long long t = __gcd(a,b);
    for (long long i = 1 ; i <= sqrt(t); i++)
    {
        if (t % i == 0)
        {
            if (n <= i && i <= m) ma = max(ma, i);
            if (n <= t / i && t / i <= m) ma = max(ma, t /i);
        }
    }
    cout << ma;
}
