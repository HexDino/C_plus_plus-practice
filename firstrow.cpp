#include <bits/stdc++.h>
using namespace std;
string s[1000001];
int a[500], d=1;
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("firstrow.inp","r",stdin);
    freopen("firstrow.out","w",stdout);
    while (getline(cin,s[d]))
    {
        d++;
    }
    d--;
    for (int i=1; i<=d; i++)
    {
        for (int j=0; j<s[i].size(); j++)
        {
            a[j]=a[j]^int(s[i][j]);
        }
    }
    for (int j=0; j<=255; j++)
    {
        cout<<char(a[j]);
    }
}
