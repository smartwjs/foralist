#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

map<int/*下标*/,int/*值的类型*/> mp; //损失性能,有常数

void fun(int n)//试除法求质因数
{
    for(int i=2;i*i<=n;i++)
    {
        while(n%i==0)
        {
            mp[i]++;
            n/=i;
        }
    }
    if(n!=1)
    {
        mp[n]++;
    }
}

signed main()
{
    int n;
    cin>>n;
    fun(n);
    for(auto [x,y]:mp)
    {
        cout<<x<<' ^ ' << y<<endl;
    }
    return 0;
}