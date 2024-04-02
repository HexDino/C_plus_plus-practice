#include<bits/stdc++.h>
using namespace std;
int t, n, a[200001], f[200001][5];
int main()
{
     ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("homework.inp","r",stdin);
    freopen("homework.out","w",stdout);
    cin >> t;
    for (int q = 1 ;q <= t ; q++)
    {
        cin >> n;
        for (int i = 1 ; i <= n ; i++)
        {
            cin >> a[i];
        }
        memset(f,0,sizeof(f));
        int sum = 1000000001;
        if (a[1]==1) f[1][1] = 1;
        sum = f[1][1];
        if (n==1) {cout << f[1][1]<<'\n';continue;}
        for (int i = 2 ; i <= n ; i++)
        {
            for (int k = 1 ; k <= 2 ; k++) /// 1 la bac 2 la trung
            {
                f[i][k] = 100000001;
                if (k==1)
                {
                    if (i==2) f[i][1] = a[1]+a[2];
                    if (i==3) f[i][1] = f[2][2]+a[i];
                    if (i>3)
                    {
                        f[i][1] = min(f[i-1][2]+a[i], f[i-2][2]+a[i-1]+a[i]);
                    }
                    //cout << i << ' ' << f[i][k] << '\n';
                }
                if (k==2)
                {
                    if (i==2) f[i][2] = min(f[i][2], f[i-1][1]);
                    else f[i][2] = min(f[i-1][1], f[i-2][1]);
                    //cout << i << ' ' << f[i][k] << '\n';
                }

            }
        }
        cout << min(f[n][1], f[n][2]) << '\n';;
    }
}
