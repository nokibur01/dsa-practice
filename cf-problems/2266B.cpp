// https://codeforces.com/problemset/problem/2266/B

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    long long int ans = max(abs(a + c - b), abs(a - b));
    cout << ans << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}