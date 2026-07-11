#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1.2e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n,k;
int a[N];
int b[N];
int ans[N];

signed main()
{
    freopen("gcd.in","r",stdin);
    freopen("gcd.out","w",stdout);
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    for(int i=1;i<=1200000;i++)
    {
        int cnt=0;
        for(int j=i;j<=1200000;j+=i)
        {
            cnt+=b[j];
        }
        if(cnt>=k)
        {
            for(int j=i;j<=1200000;j+=i)
            {
                ans[j]=max(ans[j],i);
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<ans[a[i]]<<endl;
    }
    return 0;
}
