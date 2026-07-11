#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

// int n,m;
// int a[N],s[N];
// int ans;

// signed main()
// {
//     cin>>n>>m;
//     for(int i=1;i<=n;i++)
//     {
//         cin>>a[i];

//         s[i]=s[i-1]+a[i];
//     }
//     for(int i=1;i<=n;i++)
//     {
//         for(int j=i;j<=n;j++)
//         {
//             int sum=s[j]-s[i-1];
//             if(sum%m==0)
//             {
//                 ans++;
//             }
//         }
//     }
//     cout << ans;
//     return 0;
// }

int n,m,a[N],s[N],ans;
map<int,int> mp;

signed main()
{
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
        s[i]%=m;
    }
    mp[0]=1;
    for(int i=1;i<=n;i++)
    {
        mp[s[i]]++;
    }
    for(auto [x,y]:mp)
    {
        ans+=
    }
    return 0;
}