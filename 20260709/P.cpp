#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n,k;
int p[N];
set<int> s;

signed main()
{
    cin>>n>>k;
    for(int i=1;i<=n;i++)
    {
        int x;
        cin>>x;;
        p[x]=i;

    }
    for(int i=1;i<=k;i++)
    {
        s.insert(p[i]);
    }
    int ans= *s.rbegin()- *s.begin();
    for(int l=1;l+k<=n;l++)
    {
        s.erase(p[l]);
        s.insert(p[l+k]);
        int t=*s.rbegin()- *s.begin();
        ans=min(ans,t);
    }
    cout<<ans;
    return 0;
}