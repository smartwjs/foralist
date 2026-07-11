#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

char a[N];
int n;

signed main()
{
    cin>>a+1;
    n=strlen(a+1);
    int ans=0;
    for(int i=1;i<=n;i++)
    {
        ans = ans * 26 + (a[i] - 'A' + 1);
    }
    cout<<ans;
    return 0;
}