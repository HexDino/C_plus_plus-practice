#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("DAYK.INP","r",stdin);
    freopen("DAYK.OUT","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0); 
    int n ; 
    string s;
    cin >> s;
    n = s.size();
    s = ' ' + s;
    for (int i = 1 ; i <= n ; ++i) {
        int l = 1;
        int r = i;
        while (s[l] == s[r]) l++ , r--;
        cout << l - 1 << ' ';
    }
}
