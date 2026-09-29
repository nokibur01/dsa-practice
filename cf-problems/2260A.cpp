// https://codeforces.com/problemset/problem/2260/A

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int count_zero = 0, count_one = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i])
            count_one++;
        else
            count_zero++;
    }
    if (count_zero < 2)
        cout << "-1" << endl;
    else if (v[0] == 0 && v[n - 1] == 0)
        cout << 0 << endl;
    else if (v[0] == 0 && v[n - 1] == 1 || v[0] == 1 && v[n - 1] == 0)
        cout << 1 << endl;
    else
        cout << 2 << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();

    return 0;
}