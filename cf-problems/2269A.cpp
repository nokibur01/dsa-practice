// https://codeforces.com/problemset/problem/2269/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    long long ans = 0;
    ans += 2 * (b - 1);
    ans += pow(2, a - (b - 1));
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}