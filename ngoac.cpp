#include<bits/stdc++.h>
using namespace std;
int f[105][105];
string s;
bool ok(char a, char b) {
    if (a == '}' || a == ')' || a == ']') return 0;
    if (a == '{') {if (b == '}') return 1; else return 0;}
    if (a == '(') {if (b == ')') return 1; else return 0;}
    if (a == '[') {if (b == ']') return 1; else return 0;}
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
    cout.tie(0);
    freopen("ngoac.inp","r",stdin);
    freopen("ngoac.out","w",stdout);
    cin >> s;
    int n = s.size();
    s = " " + s;
    for (int i = 1; i <= n; i++) f[i][i] = 1;
    for (int i = n - 1; i >= 1; i--) {
        for (int j = i + 1; j <= n; ++j) {
            if (j - i == 1) {
                if (ok(s[i], s[j])) f[i][j] = 0;
                else f[i][j] = 2;
                continue;
            }
            if (ok(s[i], s[j])) f[i][j] = f[i + 1][j - 1];
            else f[i][j] = min(f[i + 1][j], f[i][j - 1]) + 1;
            for (int t = i ; t < j; ++t) {
                f[i][j] = min(f[i][j], f[i][t] + f[t + 1][j]);
                //if (ok(s[i], s[t]) && ok(s[t + 1], s[j])) f[i][j] = min(f[i][j], f[i + 1][t - 1] + f[t + 2][j - 1]);
            }
        }
    }
    cout << f[1][n];
    return 0;
}
