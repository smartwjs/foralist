#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n;
int ans;

signed main()
{
    freopen("game.in","r",stdin);
    freopen("game.out","w",stdout);
    cin>>n;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            int cnt=0;
            while(n%i==0)
            {
                cnt++;
                n/=i;
            }
            int sum=0;
            for(int j=1;;j++)
            {
                sum+=j;
                if(sum<=cnt)
                {
                    ans++;
                }
                else
                {
                    break;
                }
            }
        }
    }
    if(n!=1)ans++;
    cout<<ans;
    return 0;
}