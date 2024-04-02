#include <bits/stdc++.h>
using namespace std;
string s,t;
long long dem=0;
pair <string,long long> a[999999];
void mo()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("demkt.inp","r",stdin);
    freopen("demkt.out","w",stdout);
}
int main ()
{
    cin>>s;
    sort(s.begin(),s.end());
    dem=0;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]>='0'&&s[i]<='9') t=t+s[i];
    }
    s.erase(0,t.size());
    s=s+t;
    dem=1;
    for (int i=0;i<s.size();i++)
    {
        if (s[i]==s[i+1])
        {
                a[dem].first=s[i];
                a[dem].second++;
        }
        else
        {
            a[dem].first=s[i];
            a[dem].second++;
            dem++;
        }
    }
    cout<<dem-1<<'\n';
    for (int i=1;i<dem;i++)
    {
        cout<<a[i].first<<' '<<a[i].second<<'\n';
    }
    return 0;
}
