#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n=1e5,a[N],s[N];

bool isprime(int n)
{
    if(n<2)
    {
        return false;
    }
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}

signed main()
{
    for(int i=3;i<=n;i+=2)
    {
        if(isprime(i)&&isprime((i+1)/2))
        {
            a[i]=1;
        }
    }
    for(int i=1;i<=n;i++)
    {
        s[i]=s[i-1]+a[i];
    }
    int q;
    cin >> q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)l++;
        cout<<s[r]-s[l-1]<<endl;
    }
    return 0;
}