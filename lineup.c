#include <bits/stdc++.h>
using namespace std;
long long n, s=1;
int main ()
{
    cin>>n;
    for (int i=3; i<=n; i++)
    {
        s*=i;
    }
    cout<<s;
}
