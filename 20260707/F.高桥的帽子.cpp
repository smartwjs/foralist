#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

signed main()
{
    char a,b,c,d,e,f;
    cin>>a>>b>>c>>d>>e>>f;
    if(a==d&&b==e)
    {
        cout<<"Yes";
    }
    else if(b==e&&c==f)
    {
        cout<<"Yes";
    }
    else if(a==d&&c==f)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}