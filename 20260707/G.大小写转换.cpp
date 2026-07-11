#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

signed main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int t;
    cin>>t;
    while(t--)
    {
        int t,x;
        char c;
        cin>>t>>x>>c;
        if(t==1)
        {
            s[x-1]=c;
        }
        if(t==2)
        {
            
            for(int i=0;i<s.size()&&(1);i++)
            {
                if(s[i]>='A'&&s[i]<='Z')s[i]+=('a'-'A');
                
            }
        }
        if(t==3)
        {
            for(int i=0;i<s.size()&&(1);i++)
            {
                if(s[i]>='a'&&s[i]<='z')s[i]-=('a'-'A');
            }
        }
    }
    cout<<s;
    return 0;
}