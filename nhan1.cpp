#include <bits/stdc++.h>
using namespace std;
long long n,k;
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("nhan1.inp","r",stdin);
    freopen("nhan1.out","w",stdout);
}
int main()
{
    mo();
    cin>>k;
    for (int i=1; i<=k; i++)
    {
        cin>>n;
        string s = "";
        long long d = 0;
        long long j = 1;
        long long z = 1;
        while (j>0)
        {
            s.insert(0, 1, (char)((j+d)%10+'0'));
            d = (j+d)/10;
            if (j==n) z = -1;
            j = j + z;
        }
        cout<<s<<'\n';
    }
    return 0;
}
