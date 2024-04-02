#include<bits/stdc++.h>
using namespace std;
long long n, a[1000001], c[80001], d =0, ma = -1000000000001, t = 0, ans, e, s;
bool b[1000001];
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("easytask.inp","r",stdin);
    freopen("easytask.out","w",stdout);
    cin >> n;

    for (int i = 1 ; i <= n ; i++) {
        cin >> a[i];
       // s[i] = s[i-1] + a[i];
    }
    for (int i = 1 ; i <= 1000000 ; i++) b[i] = true;
    b[1] = false;
    for (int i = 2 ; i * i<= 1000000 ; i++) {
        if (b[i] == true)
        {
            for (int j = i * i ; j <= 1000000 ; j += i) b[j] = false;
        }
    }
    ans = a[2];
    s = a[1] + a[2];
    e = a[1];
    /// chon dc khi a[1] +..+ a[l-1] min => tim l -1 o dau do trong khoang r-1 ve 0, chồng xếp dần
    for (int R = 3 ; R <= n ; R++) {
        s = s + a[R];
        if (b[R])
        {
            e = min(e, s - a[R]); /// s- a[R] la tong r- 1 so truoc
            ans = max(ans, s - e);
        }
    }
    cout << ans;
}
