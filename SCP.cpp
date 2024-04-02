#include<bits/stdc++.h>
using namespace std;
long long a, b, x1, x2;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SCP.inp","r",stdin);
    freopen("SCP.out","w",stdout);
    cin >> a >> b;
    x1 = sqrt(a);
    x2 = sqrt(b);
    if (x1 * x1 < a) x1++;
    cout << x2-x1+1;
}
