#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

signed main()
{
    freopen("magic.in","r",stdin);
    freopen("magic.out","w",stdout);
    
    int n;
    cin>>n;
    if(n<=120)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<'A';
        }
        return 0;
    }
    string s;
    while(n)
    {
        if(n%2==0)
        {
            s+='B';
            n/=2;
        }
        else{
            s+='A';
            n--;
        }
    }
    
    for(int l=0,r=s.size()-1;l<r;l++,r--)
    {
        swap(s[l],s[r]);
    }
    cout<<s;
    return 0;
}