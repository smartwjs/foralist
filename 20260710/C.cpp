#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n], s[n];
    long long sum = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        s[i] = a[i];
        sum += a[i];
    }
    sort(s, s + n);
    long long pre[n];
    pre[0] = s[0];
    for(int i = 1; i < n; i++) pre[i] = pre[i - 1] + s[i];
    for(int i = 0; i < n; i++)
    {
        int p = upper_bound(s, s + n, a[i]) - s;
        if(i) cout << " ";
        cout << sum - (p ? pre[p - 1] : 0);
    }
    cout << endl;
    return 0;
}