#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N],s[N];

signed main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n);
    for(int i=1;i<=n;i++)
    {

    }
    while(q--)
    {
        int x;
        cin>>x;
        int p=n+1;
        for(int i=1;i<=n;i++)
        {
            if(a[i]>=x)
            {
                p=i;
                break;
            }
        }
        int add1=(p-1)*x-s[p-1];
        int adds[n]-s[p-1]-(n-p+1)*
    }
    return 0;
}s
