#include<bits/stdc++.h>
using namespace std;
string s[1000001],x,y;
int cot, dong;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("crossword.inp","r",stdin);
    freopen("crossword.out","w",stdout);
    cin >> x >> y;
    for (int i = 0 ; i < x.size(); i++)
    {
        if (y.find(x[i]) != - 1)
        {
            cot = i;
            dong = y.find(x[i]);
            break;
        }
    }
    s[dong] = s[dong] + x;
 //   cout << cot << ' ' << dong << '\n';
    for (int i = 0 ; i < y.size() ; i++)
    {
        if (i==dong) continue;
        for (int j = 0  ; j < cot; j++) s[i] += '.';
        s[i] += y[i];
        for (int j = cot + 1 ; j < x.size() ; j++) s[i] += '.';

    }
    for (int i = 0 ; i < y.size() ; i++) cout << s[i] << '\n';

}
