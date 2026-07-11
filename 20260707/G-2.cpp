#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;
int n,q;
char a[N];
int t[N],x[N];
char c[N];
int p,v;
signed main()
{
    cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	cin>>q;
	for(int i=1;i<=q;i++)
	{
		cin>>t[i]>>x[i]>>c[i];
		if(t[i]==2||t[i]==3)
		{
			p=i,v=t[i];
		}
	}
	for(int i=1;i<p;i++)
	{
		if(t[i]==1)
		{
			a[x[i]]=c[i];
		}
	}
	if(v==2)
	{
		for(int i=1;i<=n;i++)
		{
			a[i]=tolower(a[i]);
		}
	}
	else if(v==3)
	{
		for(int i=1;i<=n;i++)
		{
			a[i]=toupper(a[i]);
		}
	}
	for(int i=p+1;i<=q;i++)
	{
		if(t[i]==1)
		{
			a[x[i]]=c[i];
		}
	}
	cout<<a+1<<endl;
    return 0;
}