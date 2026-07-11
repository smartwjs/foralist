#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

signed main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int maxx=-INF;
    for(int i=0;i<n;i++)
    {
        
        if(s[i]=='/')
        {
            int d=1;
            for(int l=i-1,r=i+1;l>=0&&r<n;l--,r++)
            {
                if(s[l]=='1'&&s[r]=='2')
                {
                    d+=2;
                }
                if(s[l]!='1'||s[r]!='2')
                {
                    break;
                }
                
            }
            maxx=max(maxx,d);
        }
    }
    cout<<maxx;
    return 0;
}