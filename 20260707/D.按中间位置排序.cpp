#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;

int n;
int a[N];
int b[N];
vector<int> ans;

signed main()
{
    cin >> n;
    for(int i=1;i<=3*n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]==2)
        {
            ans.push_back(i);
            // cout<<i<<endl;
        }
    }
    sort(ans.begin(),ans.end());
    for(auto e:ans)
    {
        cout<<a[e]<<' ';
    }
    return 0;
}