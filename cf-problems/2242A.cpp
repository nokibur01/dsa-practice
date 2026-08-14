// https://codeforces.com/problemset/problem/2242/A

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int k;
    cin >> k;
    int a = 0, b = 0;
    for (int i = 0; i < k; i++)
    {
        int val;
        cin >> val;
        if (val >= 3)
            a++;
        else if (val == 2)
            b++;
    }
    if (a || b >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--)
        solve();

    return 0;
}

// If there is a character that appears more then 2 times , that card be use to made two bigrams, also if there are two cards that appears 2 times, let's say aa and bb, then two bigrams can be made using them, like abab.