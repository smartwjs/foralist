#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

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

int n;
bool v[N]; //i合数 0质数 1合数,[0,1]是非质数
int p[N];
int len;

signed main()
{
    cin>>n;
    v[0]=v[1]=1;
    for(int i=2;i<=n;i++)
    {
        if(v[i]==0)
        {
            p[++len]=i;
            for(int j=i+/*'*'*/i;j<=n;j+=i)
            {
                v[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        cout<<p[i]<<' ';
    }
    cout<<'\n';
    return 0;
}