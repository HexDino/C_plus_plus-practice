#include<bits/stdc++.h>
using namespace std;
long long q;
string s;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
   // freopen("SameDigitsMin.inp","r",stdin);
   // freopen("SameDigitsMin.out","w",stdout);
    cin >> q;
    for (int i = 1 ; i <= q ; i++) {
        cin >> s;
        if (s.size() == 1) {cout << s << '\n';continue;}
        if (s.size() > 1) {
            string t;
            for (int i = 1 ; i <= s.size() ; i++) t += s[0];
            if (t <= s) {
                cout << t << '\n';
                continue;
            }
            if (t > s) {
                if (s[0] == '1') {
                    t = "";
                    for (int i = 1 ; i <= s.size() -1 ; i++) t += '9';
                    cout << t << '\n';
                }
                if (s[0] > '1') {
                        t ="";
                    char temp = s[0] - 1;
                    for (int i = 1 ; i <= s.size() ; i++) t += temp;
                    cout << t << '\n';
                }
            }
        }
    }
}
