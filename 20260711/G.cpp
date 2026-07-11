#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

pair<int,int> a[N];
bool g[N];

signed main()
{
    freopen("allien.in","r",stdin);
    freopen("allien.out","w",stdout);
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].first;
        a[i].second=i;
    }
    for(int i=1;i<=n;i++)
    {
        a[i].second--;
        if(a[i].second==0&&!g[a[i].first])
        {
            g[a[i].first]=1;
        }
        if(a[i].second==0&&g[a[i].first])
        {
            for(int j=i+1;j<=n;j++)
            {
                if(g[a[j].first])
                {
                    a[j].first--;
                    a[i].first++;
                }
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<a[i].first<<' ';
    }
    return 0;
}