#include<bits/stdc++.h>
using namespace std;
string s;
long long sum = 0;
int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("tso.inp","r",stdin);
    freopen("tso.out","w",stdout);
    cin >> s;
    for (int i = 0 ; i < s.size() ; i++)
    {
        if (s[i] >= '0' && s[i] <= '9') sum = sum + (s[i] - 48);
    }
    cout << sum;
}
