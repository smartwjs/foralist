#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9+7;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

map<int,int> fac;



int C(int m,int n)
{
    return fac[n]/(fac[m]*fac[n-m] % P);
}

signed main()
{
    freopen("flower.in","r",stdin);
    freopen("flower.out","w",stdout);
    int n,a,b;
    cin>>n>>a>>b;
    fac[0]=1;
    fac[1]=1;
    for(int i=2;i<=n;i++)
    {
        fac[i]=fac[i-1]*(fac[i-1]+1);
        fac[i] %= P;
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        if(i==a||i==b)
        {
            continue;
        }
        ans+=C(i,n);
        ans %= P;
        // cout<<C(i,n)<<' f'<<ans<<' '<<i<<' '<<n<<endl;
    }
    cout<<ans/6-1;
    return 0;
}