/*
ID: trungvt1
PROG: gift1
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
string ten[15];
int n,money[15];

int h_find(string s)
{
    for (int i=1; i<=n; i++)
    if (ten[i] == s) return i;
}
int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    cin >> n;
    for (int i=1; i<=n; i++)
        cin >> ten[i];
    for (int i=1; i<=n; i++)
    {
        string s;
        cin >> s;
        int id;
        id = h_find(s);
        int sum, k;
        cin >> sum >> k;
        if (k>0)
        {
            money[id] += -(sum/k)*k;
            for (int j=1; j <= k; j++)
            {
                cin >> s;
                id = h_find(s);
                money[id] += sum/k;
            }
        }
    }
    for (int i=1; i<=n; i++) cout << ten[i] << " " <<money[i] <<endl;
    return 0;
}
