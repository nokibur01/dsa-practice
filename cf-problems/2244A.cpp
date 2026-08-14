// https://codeforces.com/problemset/problem/2244/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    string s;
    cin >> n >> s;
    int a = 0, b = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '#')
        {
            ++a;
            b = max(a, b);
        }
        else
        {
            a = 0;
        }
    }
    int ans = ceil(b / 2.0);
    cout << ans << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

// counted the number of # and then divided by 2 as in one step two # is erased, in case of odd numbers, took the ceiling value.