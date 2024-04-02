#include<bits/stdc++.h>
using namespace std;
long long n;
string s[10001];
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("sxc.inp","r",stdin);
    freopen("sxc.out","w",stdout);
   cin >> n;
   for (int i = 1 ; i <= n ; i++) cin >> s[i];
   sort(s+1,s+n+1);
   for (int i = 1 ; i <= n ; i++) cout << s[i] << '\n';
   return 0;
}
