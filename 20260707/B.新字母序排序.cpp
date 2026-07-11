#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

string s[N];
string x;

bool cmp(string s,string t)
{
    if(s.size()>t.size())
    {
        return 0;
    }
    for(int i=0,j=0;i<s.size()&&j<t.size();i++,j++)
    {
        int sx=0,tx=0;

        for(int k=0;k<x.size();k++)
        {
            if(x[k]==s[i])
            {
                sx=k;
                break;
            }
        }
        for(int k=0;k<x.size();k++)
        {
            if(x[k]==t[j])
            {
                tx=k;
                break;
            }
        }
        if(sx<tx)
        {
            return 1;
        }
        else if(sx>tx)
        {
            return 0;
        }
    }
    return 0;
}

signed main()
{
    cin>>x;
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s[i];
    }
    sort(s+1,s+1+n,cmp);
    for(int i=1;i<=n;i++)
    {
        cout<<s[i]<<endl;
    }
    return 0;
}