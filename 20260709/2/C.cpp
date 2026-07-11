#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 1e9+7;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

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
    int res=1;
    for(int fz=n,fm=1;fm<=m;fz--,fm++)
    {
        res*=fz;
        res%=P;
        res*=fpm(fm,P-2);
        res%=P;
    }
    return res;
}

int n,a,b;
signed main()
{
    freopen("flower.in","r",stdin);
    freopen("flower.out","w",stdout);
    cin >> n >> a >> b;
    cout<<(fpm(2,n)-1+P-C(n,a)+P-C(n,b)+P)%P;
    return 0;
}