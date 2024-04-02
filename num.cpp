#include<bits/stdc++.h>
#define ll long long
using namespace std;
string s,ss;
string mi,ma;
ll i ,j , h ,k;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    freopen("num.inp","r",stdin);
    freopen("num.out","w",stdout);
    cin>>s>>ss;
    while(i<s.size()&&j<ss.size())
    {
        if(s[i]<ss[j])
        {
            mi+=s[i];
            i++;
        }
        else
        {
            mi+=ss[j];
            j++;
        }
        if(i==s.size())
        {
            for(int t=j;t<ss.size();t++) mi+=ss[t];
        }

        if(j==ss.size())
        {
            for(int t=i;t<s.size();t++) mi+=s[t];
        }

    }
    cout<<mi<<'\n';

    while(h<s.size()&&k<ss.size())
    {
        if(s[h]>ss[k])
        {
            ma+=s[h];
            h++;
        }
        else
        {
            ma+=ss[k];
            k++;
        }
        if(h==s.size())
        {
            for(int t=k;t<ss.size();t++) ma+=ss[t];
        }

        if(k==ss.size())
        {
            for(int t=h;t<s.size();t++) ma+=s[t];
        }

    }
    cout<<ma;
}
