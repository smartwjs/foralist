#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int P = 998244353;
const int INF = 0x3f3f3f3f3f;

int c[N][N]; // c[i][j]=c[i-1][j]+c[i-1][j-1] i帕斯卡三角
int n;

signed main()
{
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        c[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            c[i][j]=c[i-1][j]+c[i-1][j-1];
            c[i][j]%=P;
        }
    }
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<c[i][j]<<' ';
        }
        cout<<endl;
    }
    return 0;
}
