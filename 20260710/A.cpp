#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

char a[N];
int s[N];

signed main()
{
    int n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]=='C'&&a[i-1]=='A')
        {
            s[i]=s[i-1]+1;
        }
        else
        {
            s[i]=s[i-1];
        }
    }
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        cout<<s[r]-s[l]<<endl;
    }
    return 0;
}