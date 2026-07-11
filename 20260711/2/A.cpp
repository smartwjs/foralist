#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
int a[N],c[N];
signed main()
{
    int n;
    cin>>n;
    int x=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        c[i]=c[i-1]+a[i];
        x=max(x,-s[i]);
    }
    cout<<x<<endl;
    return 0;
}