#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9+7;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int x,y;

int fac[N],inv[N];

void init(int n)
{
    fac[0]=1;
    for(int i=1;i<=n;i++)
    {
        fac[i]=fac[i-1]*i % P;
        inv[i]=fpm(fac[i],P-2);
    }

}

int fpm(int a,int n)
{
    int res=1;
    while(n)
    {
        if(n%2)
        {
            res=res*a%P;
        }
        n/=2;
        a=a*a%P;
    }
    return res;
}

int C(int n,int m)
{
    if(m<0||n<m)
    {
        return 0;
    }
    int ans=fac[n]*inv[n-m]%P*inv[m]%P;
    return ans;

}

signed main()
{
    init(1000000);
    cin>>x>>y;
    if((x+y)%3)
    {
        cout<<0;
        return 0;
    }
    int n=(x+y)/3;
    int m=x-n;
    cout<<C(n,m);
    return 0;
}