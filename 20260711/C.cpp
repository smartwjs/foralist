#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;
int a[N];
int c[N];
int sum = 0;
signed main()
{
    freopen("bus.in", "r", stdin);
    freopen("bus.out", "w", stdout);
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        if (sum < 0)
        {
            sum = 0;
            // printf("abs(sum)=%lld\n",sum);
        }
        // printf("sum=%lld\n",sum);
    }
    cout << sum;
    return 0;
}