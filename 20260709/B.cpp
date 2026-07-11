#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

signed main()
{
    freopen("name.in","r",stdin);
    freopen("name.out","w",stdout);
    int n;
    cin>>n;
    int n2=n;
    string s="";
    while(n2>=26)
    {
        s+=('a'+n2%26-1);
        n2/=26;
    }
    s+=('a'+n2%26-1);
    reverse(s.begin(),s.end());
    cout<<s;
    return 0;
}