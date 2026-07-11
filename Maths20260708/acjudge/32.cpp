#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
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
int digit(int n)
{
    int res=0;
    while(n)
    {
        n/=10;
        res++;
    }
    return res;
}
//v(n)=n*(10^0+10^k+10^2k.,.....+10^(n-1)k)
//sn=a(q^n)/(q-1)
//a=1
//q=10^k
//sn=(10^k^n-1)/(10^k-1)
//ans=n*sn%P

int n;

signed main()
{
    cin>>n;
    int k=digit(n);
    int t=fpm(10,k);
    int fz=(fpm(t,n)-1+P)%P;
    int fm=fpm((t-1+P)%P,P-2);//底数i可以mod P,指数不行
    int ans=n%P*fz%P*fm%P;
    cout<<ans;
    return 0;
}