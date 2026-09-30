// https://codeforces.com/problemset/problem/2254/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    vector<int> a(3);
    cin >> a[0] >> a[1] >> a[2];
    sort(a.begin(), a.end());
    cout << min(a[2] - a[1], a[1] - a[0]) << endl;
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