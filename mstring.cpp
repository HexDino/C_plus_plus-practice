#include<bits/stdc++.h>
using namespace std;
bitset<20> b;
int n;
char a[1001];
string s[1500000];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("mstring.inp","r",stdin);
    freopen("mstring.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+n+1);
    for (int i = 1 ; i < 1<<n ; i++)
    {
        b = bitset<20> (i);
        for (int j = 0 ; j <= n - 1 ; j++)
        {
            if (b[j] == 1) s[i] += a[j+1];
        }
    }
    long long cc;
    cc = 1<<n;
    cc = cc - 1;
    sort(s+1,s+cc+1);
    for (long long i = 1 ; i <= cc ; i++) cout << s[i] << '\n';
}
