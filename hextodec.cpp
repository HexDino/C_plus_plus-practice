#include <bits/stdc++.h>
using namespace std;
long long kt(char a[])
{
    long long b = strlen(a);
    long long ans = 1;
    long long res = 0;
    for (int i=b-1; i>=0; i--)
    {
        if (a[i]>='0' && a[i]<='9')
        {
            res += (a[i] - 48)*ans;
            ans  = ans * 16;
        }
        else if (a[i]>='A' && a[i]<='F')
        {
            res += (a[i] - 55)*ans;
            ans  = ans *16;
        }
    }
    return res;
}
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("hextodec.inp","r",stdin);
    freopen("hextodec.out","w",stdout);
    char s[256];
    while (cin>>s)
    {
        cout << kt(s) << '\n';
    }
    return 0;
}
