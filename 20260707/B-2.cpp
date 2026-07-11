#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int c[N];
string a[N];
int n;

bool cmp(string x,string y)
{
    for(int i=0;i<min(x.size(),y.size());i++)
    {
            if(c[x[i]]>c[y[i]])
            {
                return false;
            }
        else if(c[x[i]]<c[y[i]])
        {
            return true;
        }
    }
    return x.size()<y.size();
}

signed main()
{
    for(int i=1;i<=26;i++)
    {
        char x;
        cin>>x;
        c[x]=i;
    }
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    sort(a+1,a+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<a[i]<<endl;
    }   
    return 0;
}