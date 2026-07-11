#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int gcd(int a,int b) //递归写法
{
    if(b==0)
    {
        return 0;
    }
    return gcd(b,a%b);
}

signed main()
{
    cout << gcd(48,18) << endl;
    cout << __gcd(48,18) << endl;//内置

    return 0;
}