#include<bits/stdc++.h>
using namespace std;
int d, l, i, s[100001], vt = 0,nho,dem,tmp;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("number.inp","r",stdin);
    freopen("number.out","w",stdout);
    while (cin >> d >> l)
    {
        if (d < l) {cout << -1<<'\n';continue;}
        if (d < 10 && l == 1) {cout << d<<'\n';continue;}
        s[1] = d;
        nho = 0;
        dem = 2;
        while (true)
        {
            tmp = s[dem - 1] * l + nho;
            nho = tmp / 10;
            s[dem] = tmp % 10;
            if (s[dem] == d && nho==0)
            {
                dem--;
                break;
            }
            dem++;
        }
        for (i = dem ; i >= 1 ; i--) cout << s[i];
        cout<<'\n';
    }
}
