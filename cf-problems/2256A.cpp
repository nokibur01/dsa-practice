// https://codeforces.com/problemset/problem/2256/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    int mn = min(a, min(b, c)), mx = max(a, max(b, c));
    int mid = a + b + c - mn - mx;
    if (mid + mn < mx)
    {
        cout << (mid + mn) - mn << endl;
    }
    else
    {
        cout << mx - mn << endl;
    }
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