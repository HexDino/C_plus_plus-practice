#include <bits/stdc++.h>

using namespace std;

string s;
int i,n,ma=0;

void init() {
    freopen("CSLN.inp","r",stdin);
    freopen("CSLN.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}

int main() {
    init();
    cin >> s;
    n = s.size();
    for (i = 0 ; i < n ; ++i) {
        ma = max (ma, (int)s[i]);
    }
    cout << ma-48;
}
