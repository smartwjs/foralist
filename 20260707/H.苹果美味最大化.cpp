#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;
int p[N],q[N],r[N];
signed main()
{
    int x,y,a,b,c;
    cin>>x>>y>>a>>b>>c;
    for(int i=1;i<=a;i++)
    {
        cin>>p[N];
    }
    sort(p+1,p+1+a,greater<int>());
    for(int i=1;i<=b;i++)
    {
        cin>>q[N];
    }
    sort(q+1,q+1+b,greater<int>());
    for(int i=1;i<=c;i++)
    {
        cin>>r[N];
    }
    sort(r+1,r+1+c,greater<int>());
    int ans=0;
    int i=1,j=1,k=1;
    for(int cnt=1;cnt<=x+y;cnt+=3)
    {
        ans+=(p[i]+q[j]+r[k]);
        if(i<=a)
        {
            i++;
        }
        if(j<=b)
        {
            j++;
        }
        if(k<=c)
        {
            k++;
        }
        ans+=(p[i]+q[j]+r[k]);
    }
    int n=(x+y)%3;
    if(n==0)
    {

    }
    int p1=max({p[i],q[j],r[k]});
    if(n==1)
    {
        ans+=p1;
    }
    if(n==2)
    {
        if(p1==p[i])
        {
            ans+=max(q[j],r[k]);
        }
        else if(p1==q[j])
        {
            ans+=max(p[i],r[k]);
        }
        else if(p1==r[k])
        {
            ans+=max(q[j],p[i]);
        }
    }
    cout<<ans;
    return 0;
}