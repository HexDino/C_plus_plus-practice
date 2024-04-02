#define fi first
#define se second
#include<bits/stdc++.h>
using namespace std;
long long n, dem = 1;
pair<int,int> a[1000001];
int main()
{

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    freopen("collecnumber.inp","r",stdin);
    freopen("collecnumber.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i].fi;
        a[i].se = i;
    }
    sort(a+1, a+n+1);
    a[n+1].se = n+1;
    for (int i = 1 ; i <= n ; i++)
    {
        if (a[i].se>a[i+1].se) dem++;
    }
    cout << dem;
}
