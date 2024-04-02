#include<bits/stdc++.h>
using namespace std;
long long n, x;
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("seqdigit.inp","r",stdin);
     freopen("seqdigit.out","w",stdout);
    cin >> n;
    for (int i = 1 ; i <= n ; i++)
    {
        cin >> x;
        long long lenday = 0, so = 0, sochuso = 1, sum = 0;
        while (x - sum > sochuso)
        {
           so++;


           if (so == 10) sochuso++;
           if (so == 100) sochuso++;
           if (so == 1000) sochuso++;
           if (so == 10000) sochuso++;
           if (so == 100000) sochuso++;
           if (so == 1000000) sochuso++;
           if (so == 10000000) sochuso++;
           if (so == 100000000) sochuso++;
           if (so == 1000000000) sochuso++;lenday += sochuso;
           sum += lenday;
        }
        string t;
        lenday--;
        int pivot = abs(x-sum);
        cout << x << ' ' << sum << ' ' << so << ' ' << sochuso << ' ' << lenday << ' ';;
        int l = 1;
        while (t.size() < pivot)
        {

            int cc = l;
            while (cc > 0) {t += (char)(cc%10 + 48);cc/=10;}
            l++;
        }
      //  cout << t << ' ';
              if (x - sum == 0) {cout << so  % 10 << '\n';continue;}

        cout << t[pivot - 1] << '\n';
    }
}
