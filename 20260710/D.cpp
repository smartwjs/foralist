#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 1e6;

int n,m,k;
int ans=1e18;

signed main()
{
    cin>>n>>m>>k;
    char a[n+10][m+10]={0};
    int s[n+10][m+10]={0};
    int t[n+10][m+10]={0};
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.')
            {
                s[i][j]=s[i][j-1]+1;
                t[i][j]=t[i-1][j]+1;
            }
            else if(a[i][j]=='x')
            {
                s[i][j]=s[i][j-1]+INF;
                t[i][j]=t[i-1][j]+INF;
            }
            else
            {
                s[i][j]=s[i][j-1];
                t[i][j]=t[i-1][j];
            }
        }
    }
    for(int i=1;i<=n;i++)
    {
        for(int l=1,r=k;r<=m;l++,r++)
        {
            int cnt=s[i][r]-s[i][l-1];
            ans=min(ans,cnt);
        }
    }
    for(int j=1;j<=m;j++)
    {
        for(int l=1,r=k;r<=n;l++,r++)
        {
            int cnt=t[r][j]-t[l-1][j];
            ans=min(ans,cnt);
        }
    }
    if(ans>=INF)
    {
        cout<<-1;
        return 0;
    }
    cout<<ans;
    return 0;
}
