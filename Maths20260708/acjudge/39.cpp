#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
struct Node{
    int x,y;
}a[N];
bool cmp(Node q,Node w)
{
    return q.x>w.x;
}
vector<Node> b;
signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].x;
        a[i].y=i;
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        if(a[i].x==a[i+1].x||a[i].x==a[i-1].x)
        {
            continue;
        }
        else
        {
            b.push_back(a[i]);
        }
    }
    sort(b.begin(),b.end(),cmp);
    if(b.empty())
    {
        cout<<-1;
    }
    else
    {
        cout<<b[0].y;
    }
    return 0;
}