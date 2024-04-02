#include<bits/stdc++.h>
using namespace std;
string s;
long long n, dem = 0, tr[100001], ph[100001];
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("kaba.inp","r",stdin);
    freopen("kaba.out","w",stdout);
    cin >> s;
    n = s.size() - 1;
    if (s[0] =='A') tr[0] = 1; else tr[0] = 0;
    for (int i = 1 ; i<= n ;i++)
    {
        if (s[i]=='A') tr[i] = tr[i-1]+1;
        else tr[i] = tr[i-1];
    }
    if (s[n] == 'A') ph[n] = 1;
    else ph[n] = 0;
    for (int i = n - 1 ; i >= 0 ; i--)
    {
        if (s[i]=='A') ph[i] = ph[i+1]+1;
        else ph[i] = ph[i+1];
    }
    for (int i = 1 ; i < n ; i++)
    {
        if (s[i] == 'B') dem += tr[i] * ph[i];
    }
    cout << dem;
}
