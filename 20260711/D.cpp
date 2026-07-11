#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N];
int n, q;

signed main()
{
    freopen("class.in","r",stdin);
    freopen("class.out","w",stdout);
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    sort(a+1,a+1+n);
    while(q--)
    {
        int x;
        cin >> x;
        cout<<n-(lower_bound(a+1,a+1+n,x)-a)+1;
    }
    return 0;
}