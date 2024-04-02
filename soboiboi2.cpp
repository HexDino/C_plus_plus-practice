#include<bits/stdc++.h>
using namespace std;
long long a, b;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);
    freopen("soboiboi2.inp","r",stdin);
    freopen("soboiboi2.out","w",stdout);
    cin >> a >> b;
    if (a%b!=0) cout << 0 << '\n';
    else
    {
        long long t = a/b;
        long long dem = 0;
        for (int i = 1 ; i <= sqrt(t) ; i++)
        {
            if (t%i==0) dem+=2;
        }
        long long tt = sqrt(t);
        if (tt*tt==t) dem--;
        cout << dem << '\n';
    }
}
