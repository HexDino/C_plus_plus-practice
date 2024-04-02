#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,t="11",ss="010";
	int i,d=0,a,b;
	freopen("BAI2.INP","r",stdin);
	freopen("BAI2.OUT","w",stdout);
	cin>>s;
	while(s.find(t)!=-1)
	{
		a=s.find(t);
		s[a]='0';
		s[a+1]='0';
	    d++;
	}
	while(s.find(ss)!=-1)
	{
		b=s.find(ss);
		s[b]='0';
		s[b+1]='0';
		s[b+2]='0';
		d++;
	}
	if(s.find('1')!=-1) d=-1;
	cout<<d;
	return 0;
}
	
