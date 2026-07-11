#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e7 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int a[N],n=1e7,s[N];

void sieve(int n)
{
    memset(a,1,sizeof(a));
    a[0]=a[1]=0;
    for(int i=2;i<=n;i++)
    {
        if(a[i]==1)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                a[j]=0;
            }
        }
    }

}

signed main()
{
    sieve(n);
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    int l,r;
    cin>>l>>r;
    cout<<s[r]-s[l-1];
    return 0;
}