#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

string s[N];

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(j!=i&&s[j]==s[i]&&s[j]!="-")
            {
                s[j]="-";
            }
            string qqq=s[j];
            reverse(qqq.begin(),qqq.end());
            if(j!=i&&qqq==s[i]&&s[j]!="-")
            {
                s[j]="-";
            }
        }
    }
    int cnt=0;
    for(int i=1;i<=n;i++)
    {
        if(s[i]!="-")
        {
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}