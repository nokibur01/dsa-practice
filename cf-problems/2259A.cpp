// https://codeforces.com/problemset/problem/2259/A

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int a, b;
    cin >> a >> b;
    a /= b;
    string s;
    cin >> s;
    int i = 0, cnt = 0;
    while (a--)
    {
        int x = b, cnt_z = 0;
        while (x--)
        {
            if (s[i++] == '0')
                cnt_z++;
        }
        if (!cnt_z)
            cnt++;
    }
    cout << cnt << "\n";
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