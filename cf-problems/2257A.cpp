// https://codeforces.com/problemset/problem/2257/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a, b;
    cin >> a >> b;
    map<char, int> mp;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;
        mp[toupper(s[0])]++;
    }
    vector<string> word(b);
    for (auto &val : word)
        cin >> val;
    int cnt = 0;
    for (int i = 0; i < b; i++)
    {
        for (auto val : word[i])
        {
            if (mp.find(val) == mp.end())
                cnt++;
        }
        if (cnt)
            break;
    }
    if (cnt)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
        solve();
}