#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int a[N];
int b[N];
int c[N];

signed main()
{
    int n;
    cin >> n;
    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin >> b[i];
    }
    for(int i=1;i<=n;i++)
    {
        cin >> c[i];
    }
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i]==b[c[j]])
            {
                ans++;
            }
        }
    }
    cout<<ans;
    return 0;
}