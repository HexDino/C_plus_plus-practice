#include<bits/stdc++.h>
using namespace std;
long long n, a[5000001], sum = 0;
int check(int n)
{
    int ans = 0;
    for (int i = 2 ; i <= sqrt(n) ; i++)
    {
        if (n % i == 0) return i;
    }
    if (ans == 0) return n;
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("seconddivisor.inp","r",stdin);
    freopen("seconddivisor.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> a[i];
        sum = sum + check(a[i]);
    }
    cout << sum;
}
