#include <bits/stdc++.h>
using namespace std;
long long t, n, a[1000001], c[1000001];
int main ()
{
    cin>>t;
    while (t--)
    {
        cin>>n;
        for (int i=1; i<=n; i++)
        {
            cin>>a[i];
            c[i]=a[i];
        }
        sort (c+1, c+1+n);
    }
}
