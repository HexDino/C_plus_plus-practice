#include<bits/stdc++.h>
using namespace std;
int a[1010] = {}, f[1010][2][4];
int res = 1;
int n;
void mo()
{
    freopen("seqd.inp", "rt", stdin);
    freopen("seqd.out", "wt", stdout);
}
int main(){

    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++){
        f[i][0][0] = 1;
        for (int j = 1; j < i; j++) if (a[i] >= a[j])
            f[i][0][0] = max(f[i][0][0], f[j][0][0] + 1);
        res = max(res, f[i][0][0]);
        for (int k = 1; k < 4; k++)
            if (i >= k)
            {
            if (i > k) f[i][0][k] = 1;
            f[i][1][k] = 1;
            for (int j = 1; j < i; j++)
            {
                if (a[i] >= a[j] && i > k && j > k)
                    f[i][0][k] = max(f[i][0][k], f[j][0][k] + 1);
                if (a[i] >= -a[j] && i > k && j >= k)
                    f[i][0][k] = max(f[i][0][k], f[j][1][k] + 1);
                if (-a[i] >= a[j] && j >= k)
                    f[i][1][k] = max(f[i][1][k], f[j][0][k - 1] + 1);
                if (-a[i] >= -a[j] && j >= k - 1)
                    f[i][1][k] = max(f[i][1][k], f[j][1][k - 1] + 1);
            }
            res = max(res, f[i][0][k]);
            res = max(res, f[i][1][k]);
        }
    }
    cout << res;
}

