#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n;
char a[N];
int s[N],ans;
int cnt[N];

signed main()
{
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+(a[i]=='0');
        s[i]%=2;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            int cnt=s[j]-s[i-1];
            if(cnt%2==0)
            {
                ans++;
            }
        }
    }
    cout<<ans;
    cnt[0]=1;
    for(int i=1;i<=n;i++)
    {
        ans+=
    }
    return 0;
}