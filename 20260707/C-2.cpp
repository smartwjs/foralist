#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int a[N];
int b[N];

signed main()
{
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        cin>> a[i];
		if(a[i]==i)sum++;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
	{
		if(a[a[i]]==i)
		{
			if(a[i]!=i)
			{
				ans++;
			}
		}
	}
    ans/=2;
    ans += (sum * (sum - 1)) / 2;
	cout<<ans;
    return 0;
}

// @pid 23 @tid 6a4c77571661baf66dedcd79 @lang cc.std14
