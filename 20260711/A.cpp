#include <bits/stdc++.h>
using namespace std;
#define int long long
const int P = 998244353;
const int N = 1e6 + 10, M = 1e9;
const int INF = 0x3f3f3f3f3f3f;

int n;
int a[N], b[N];
double c[N];
double sum, ans;
signed main()
{
    freopen("meet.in", "r", stdin);
    freopen("meet.out", "w", stdout);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i] >> b[i];
        c[i] = a[i] * 1.0 / b[i];
        sum += c[i];
    }
    sum /= 2;
    for (int i = 1; i <= n; i++)
    {
        if (sum > c[i])
        {
            ans += a[i];
            sum -= c[i];
        }
        else
        {
            ans += sum * b[i];
            break;
        }
    }
    cout << fixed << setprecision(15);
    cout << ans;
    return 0;
}