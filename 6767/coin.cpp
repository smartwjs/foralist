#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

signed main()
{
    int k;
    cin>>k;
    int m=0;
    int ans=1;
    int cnt=0;
    for(int i=1;i<=k;i++)
    {
        if(cnt==m)
        {
            m++;
            cnt=0;
        }
        cout<<"OLD:"<<m<<' '<<cnt<<' '<<ans<<endl;
        ans+=m;
        
        cout<<m<<' '<<cnt<<' '<<ans<<endl;
        cnt++;
    }
    cout<<ans-1;
    return 0;
}