#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N],c[N],b[N];

signed main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
    }
    sort(b+1,b+1+n);
    for(int i=1;i<=n;i++)
    {
        c[i]=c[i-1]+b[i];
    }
    for(int i=1;i<=n;i++)
    {
        int pos=upper_bound(b+1,b+1+n,a[i])-(b);
        cout<<c[n]-c[pos-1]<<' ';
    }
    
    return 0;
}