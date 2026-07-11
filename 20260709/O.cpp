#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

pair<int,int> a[N];
int n;
pair<int,int> c;

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i].second;
        a[i].first=0;
    }
    int q;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int op;
        cin>>op;
        if(op==1)
        {
            cin>>c.second;
            c.first=i;
        }
        if(op==2)
        {
            int p,x;
            cin>>p>>x;
            if(a[p].first>c.first)
            {
                a[p].first=i;
                c.second+=x;
            }
            else if(c.first>a[p].first)
            {
                a[p].first=i;
                a[p].second=x;
            }
        }
        if(op==3)
        {
            int p;
            cin>>p;
            if(c.first>a[p].first)
            {
                cout<<c.second<<endl;
            }
            else
            {
                cout<<c.second+a[p].second<<endl;
            }
        }
    }
    return 0;
}