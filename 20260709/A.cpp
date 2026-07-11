#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;


char a[20];
signed main()
{
    freopen("switch.in","r",stdin);
    freopen("switch.out","w",stdout);
    cin>>a+1;
    int n=strlen(a+1);
    int p=0;
    int ans=0;
    for(int i=n;i>=1;i--)
    {
        p+=(a[i]-'A'+1)*26;
        
    }
    cout<<p-25;
    return 0;
}