#include <bits/stdc++.h>
using namespace std;
#define int long long
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f;
int a[]={0,0,1,2,3,4,5,6,7,8,9};
signed main()
{
    string s;
    cin>>s;
    int n=10;
    do{
        for(int i=1;i<=n;i++)
        {
            cout<<a[i]<<' ';
        }
        cout<<endl;
    }while(next_permutation(a+1,a+n+1));
    
a[1]=9,a[2]=8,a[3]=7,a[4]=6,a[5]=5,a[6]=4,a[7]=3,a[8]=2,a[9]=1,a[10]=0;

    return 0;
}