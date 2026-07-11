#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n;
int a[N];
set<int> s;
map<int,int> mp;
int ans[N];

signed main()
{
    freopen("rank.in","r",stdin);
    freopen("rank.out","w",stdout);

    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]++;
        s.insert(a[i]);
    }
    int len=s.size();
    int t=0;
    for(auto e:s)
    {
        t++;
        ans[len-t]=mp[e];
    }
    for(int k=0;k<n;k++)
    {
        cout<<ans[k]<<endl;
    }
    return 0;
}
/*

*/