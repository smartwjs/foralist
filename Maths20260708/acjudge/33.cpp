#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
map<int,int> mp;

void fun(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        mp[i]++;
        while(n%i==0)
        {
            
            n/=i;
        }
    }
    if(n!=1)
    {
        mp[n]++;
    }
}
signed main()
{
    int x,y;
    cin>>x>>y;
    fun(x);
    fun(y);
    int ans=0;
    for(auto [x,y]:mp)
    {
        if(y==2)
        {
            ans++;
        }

    }
    cout<<ans+1;
    return 0;
}