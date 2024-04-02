#include<bits/stdc++.h>
using namespace std;
long long n;
string s[10000001];
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Ghep1.inp","r",stdin);
    freopen("Ghep1.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) cin >> s[i];
    sort(s+1,s+n+1);
    for (int i = n ; i >= 1 ; i--) cout << s[i];
}
