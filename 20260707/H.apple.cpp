#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;
vector<int> vec;
signed main()
{
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    for(int i=1;i<=a+b+c;i++)
    {
        int qq;
        cin>>qq;
        vec.push_back(qq);
    }
    sort(vec.begin(),vec.end(),greater<int>());
    int ans=0;
    for(int i=0;i<x+y;i++)
    {
        ans+=vec[i];
    }
    cout<<ans;
    return 0;
}