#include<bits/stdc++.h>
using namespace std;
int n, a[100001];
int ugly(int n)
{
    if(n==1) return 1;
    a[1] = 1;
    int i2=1, i3=1, i5=1,next2,next3,next5, next; // 1 cai la chi nhan 2 1 cai chi nhan 3 1 cai chi nhan 5
    for (int i = 2 ; i <= n ; i++)
    {
        next2 = a[i2] * 2;
        next3 = a[i3] * 3;
        next5 = a[i5] * 5;
        next = min(next2,min(next3,next5));
        if (a[i2] * 2 == next)
        {
            i2 = i2 + 1;
            a[i] = next;
        }
        if (a[i3] * 3 == next)
        {
            i3++;
            a[i] = next;
        }
        if (a[i5] * 5 == next)
        {
            i5++;
            a[i] = next;
        }

    }
    return next;

}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("uglynum.inp","r",stdin);
    freopen("uglynum.out","w",stdout);
    cin >> n;
    cout << ugly(n);
}
