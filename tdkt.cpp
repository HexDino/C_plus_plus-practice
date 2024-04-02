#include<bits/stdc++.h>
using namespace std;
string s;
map<char,int> m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tdkt.inp","r",stdin);
    freopen("tdkt.out","w",stdout);
    cin >> s;
    for (int i = 0 ; i < s.size() ; i++) m[s[i]]++;
    for (int i = 0 ; i < m['c'] ; i++) cout << 'c';
    for (int i = 0 ; i < m['b'] ; i++) cout << 'b';
    for (int i = 0 ; i < m['a'] ; i++) cout << 'a';
    return 0;
}
