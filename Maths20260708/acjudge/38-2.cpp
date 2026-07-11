#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

set<string> st;
vector<string> vec;

signed main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        string s;
        cin>>s;
        st.insert(s);
    }
    for(auto e:st)
    {
        vec.push_back(e);
    }
    for(int i=0;i<vec.size();i++)
    {
        for(int j=0;j<vec.size();j++)
        {
            if(i!=j)
            {
                if(vec[i]==vec[j]&&vec[j]!="-")
                {
                    vec[j]="-"; 
                }
                else
                {
                    string q=vec[j];
                    reverse(q.begin(),q.end());
                    if(q==vec[i])
                    {
                        vec[j]="-";
                    }
                }

            }
        }
    }
    int cnt=0;
    for(auto e:vec)
    {
        if(e!="-")
        {
            cnt+=1;
        }
    }
    cout<<cnt;
    return 0;
}