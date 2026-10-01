// https://codeforces.com/problemset/problem/2267/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, point = 0, i = 0;
    string s;
    char ch;
    cin >> a >> ch >> s;
    a -= 1;
    while (i <= a)
    {
        if (s[i] != s[a])
        {
            if (s[i] == ch || s[a] == ch)
            {
                point++;
            }
            else
            {
                point += 2;
            }
            // cout << i << " : " << s[i] << " " << a << " : " << s[a] << endl;
        }
        i++, a--;
    }
    cout << point << endl;
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