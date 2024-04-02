#include<bits/stdc++.h>
using namespace std;
string s;
int n, now, ma = 1;
map<int,int> m;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("moverect.inp","r",stdin);
    freopen("moverect.out","w",stdout);
    cin >> n >> s;
    now = 0;
    m[now] = 1;
    for (int i = 0 ; i < n ; i++)
    {
       if (s[i] == 'R') {
        now++;
        m[now]++;
        ma = max(ma, m[now]);
       }
       else
       {
            now--;
        m[now]++;
        ma = max(ma, m[now]);
       }
    }
    cout << ma;
}
