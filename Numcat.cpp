#include<bits/stdc++.h>
using namespace std;
long long n;
map<char,int> m;
string s;
int main()
{
     ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("Numcat.inp","r",stdin);
    freopen("Numcat.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++) {
        cin >> s;
        m[s[0]]++;
        m[s[1]]++;
    }
    for (char i = '9' ; i >= '0' ; i--) {
        for (int j = 1 ; j <= m[i] ; j++) cout << i;
    }
}
