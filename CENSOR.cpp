#include <bits/stdc++.h>
using namespace std;
const long long MOD = 1e9+7;
const long long base = 30;
long long hashs[1000005];
char a[1000005];
string s , t;
int main()
{
    freopen("CENSOR.INP","r",stdin);
    freopen("CENSOR.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
    cin >> s >> t;
    long long hasht = 0;
    long long pw = 1;
    for(int i = 0 ; i < t.size() ; ++i) pw = (pw * base) % MOD;
    for(int i = 0 ; i < t.size() ; ++i) hasht = (hasht * base + t[i] - 'a' + 1) % MOD;
    int n = 1;
    for(int i = 0 ; i < s.size() ; ++i)
    {
        a[n]=s[i];
        hashs[n]=(hashs[n-1] * base + s[i] - 'a'+ 1) % MOD;
        if(n >= t.size())
        {
            long long x = (hashs[n] - hashs[n - t.size()] * pw + MOD * MOD) % MOD;
            if(x == hasht) n -= t.size();
        }
        n++;
    }
    for(int i = 1 ; i < n ; ++i) cout << a[i];
}
