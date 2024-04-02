#include <bits/stdc++.h>
using namespace std;

string a, b;
int i, k;
bool f[10000];

int main() {
    getline(cin, a);
    getline(cin, b);
    for(i = 0; i < a.size(); ++i) if('Z' >= a[i] && a[i] >= 'A') a[i] = a[i] + 32;
    for(i = 0; i < b.size(); ++i) if('Z' >= b[i] && b[i] >= 'A') b[i] = b[i] + 32;
    int s = a.find(b);
    if(s == -1) {cout << -1; return 0;}
    for(i = s; i < s + b.size(); ++i) {
        f[i] = true;
    }
    for(i = 0; i < a.size(); ++i) {
        if(f[i] == false) cout << i + 1 << " ";
    }


}
