#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    //freopen("unique.inp","r",stdin);
    //freopen("unique.out","w",stdout);
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++)
    {
        int x;
        cin>>x;
        if (x<10)
        {
            cout<<x<<'\n';
        }
        else if (x>45)
        {
            cout<<-1<<'\n';
        }
        else
        {
            int n = x;
            vector<int> v;
            int num = 9;
            int sum = 0;
            while (n!=sum)
            {
                if ((n-sum)>num)
                {
                    sum+=num;
                    v.push_back(num);
                    num--;
                }
                else
                {
                    v.push_back(n-sum);
                    sum=n;
                }
            }
            for (int j = v.size()-1; j >=0 ; j--)
            {
                cout<<v[j];
            }
            cout<<'\n';
        }
    }
}
