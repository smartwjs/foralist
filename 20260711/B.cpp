#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

char a[N];
int c[N];

signed main()
{
    freopen("count.in", "r", stdin);
    freopen("count.out", "w", stdout);
    int n, q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        c[i] = c[i - 1] + (a[i] >= 'a' && a[i] <= 'z' && a[i - 1] >= 'a' && a[i - 1] <= 'z' && a[i] == a[i - 1]);
    }
    while (q--)
    {
        int l, r;
        cin >> l >> r;
        if (c[r - 1] - c[l] >= 0)
        {
            cout << c[r] - c[l] << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
    return 0;
}