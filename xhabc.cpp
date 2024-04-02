#include<bits/stdc++.h>
using namespace std;
long long dem;
string s;
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("xhabc.inp","r",stdin);
    freopen("xhabc.out","w",stdout);
   cin >> s;
   for (int i = 0 ; i <= s.size() - 3 ; i++) {
     string t = s.substr(i,3);
     if (t == "abc") dem++;
   }
   cout << dem;
}
