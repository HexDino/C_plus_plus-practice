#include<bits/stdc++.h>
using namespace std;
long long n, s[1000001], a[1000001], c[80001], d =0, ma = -1000000000001;
bool b[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    //freopen("easytask.inp","r",stdin);
    //freopen("easytask.out","w",stdout);
    cin >> n;
    s[0] = 0;
    for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
        s[i] = s[i-1] + a[i];
    }
    for (int i = 1 ; i <= 1000000 ; i++) b[i] = true;
    b[1] = false;
    for (int i = 2 ; i * i<= 1000000 ; i++) {
        if (b[i] == true)
        {
            for (int j = i * i ; j <= 1000000 ; j += i) b[j] = false;
        }
    }
    for (int i = 2 ; i <= n ; i++)
    {
        if (b[i] == true) {
            c[++d] = i;
        }
    }
    for (int i = 1 ; i <= d ; i++) {
        for (int j = i ; j <= d ; j++) {ma = max(ma, s[c[j]] - s[c[i]-1]);cout << j << ' ' << i << ' ' << s[c[j]] - s[c[i]-1] << '\n';}
    }
    cout << ma;
}

