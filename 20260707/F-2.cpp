#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

string s,t;
string fun(string x)
{
    if(x=="R G B"||x=="G B R"||x=="B R G")
    {
        return "R G B";
    }
    else
    {
        return "R B G";
    }
}

signed main()
{
    getline(cin,s);
    getline(cin,t);
    if(fun(s)==fun(t))
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
    return 0;
}