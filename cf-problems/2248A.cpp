// https://codeforces.com/problemset/problem/2248/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string s1;
    int z = 0, o = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '0' && !z)
        {
            z += 1;
        }
        else if (s[i] == '1' && !o)
        {
            o += 1;
        }
        else
            s1 += s[i];
    }
    cout << s1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    while (n--)
        solve();
}

// Both tries to win, so eliminates the first zero and first one from the string, the remaining string same as it is.