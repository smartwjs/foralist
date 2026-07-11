#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int P = 998244353;
const int INF = 0x3f3f3f3f3f;

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


signed main()
{
    
    return 0;
}
