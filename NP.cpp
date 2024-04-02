#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("NP.inp","r",stdin);
    freopen("NP.out","w",stdout);
    cin >> n;
    for (int i = 0 ; i < 1 << n ; i++)
    {
        b = bitset<20> (i);
        for (int j = n - 1 ; j >= 0 ; j--) cout << b[j];
        cout << '\n';
    }

}
