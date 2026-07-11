#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

bool isprime(int n)
{
    if(n==2)return true;
    if(n<2)return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)return false;
    }
    return true;
}

signed main()
{
    freopen("game.in","r",stdin);
    freopen("game.out","w",stdout);
    int n;
    cin>>n;
    if(n<=1)
    {
        cout<<0;
        return 0;
    }
    while(!isprime(n))
    {
        for(int i=2;i<=n;i++)
        {
            if(n%i==0)
            {
                n/=i;
            }
        }
    }
    cout<<n;
    return 0;
}
