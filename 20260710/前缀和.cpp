#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

signed main()
{
    int n,m,a[N],s[N];
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        s[i]=s[i-1]+a[i];
    }
    while(m--)
    {
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l-1]<<endl;
    }
    return 0;
}