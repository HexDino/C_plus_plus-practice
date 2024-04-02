#include<bits/stdc++.h>
using namespace std;
int n, a[2001], parent[1000001], f[2001], ma = 0, pivot, d = 0, b[20001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("daytang.inp","r",stdin);
    freopen("daytang.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
    f[1] = 1;
    parent[1] = -1;
    for (int i = 2 ; i <= n ; i++)
    {
        f[i] = 1;
        parent[i] = -1;
        for (int j = 1 ; j < i ; j++)
        {
            if (a[j] < a[i])
            {
                if (f[i] < f[j] + 1)
                {
                    f[i] = f[j] + 1;
                    parent[i] = j;
                }
            }
        }
        if (ma < f[i])
        {
            ma = f[i];
            pivot = i;
        }
    }
    cout << ma << '\n';
    while (pivot != -1)
    {
        b[++d] = pivot;
        pivot = parent[pivot];
    }
    for (int i = d ; i >= 1; i--) cout << b[i] << ' ';
}
