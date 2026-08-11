// https://codeforces.com/problemset/problem/2244/B

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);
    for (auto &val : v)
        cin >> val;
    long long int stock = 0;
    bool flag = true;
    for (int i = 0; i < v.size(); i++)
    {
        stock += v[i];
        v[i] = 0;
        if (stock < (i + 1))
        {
            flag = false;
            break;
        }
        else
        {
            v[i] = i + 1;
            stock -= v[i];
        }
    }
    if (flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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

// As the problem states that the books should be in increasing order and books can be put from left to right, so from left the order was maintained , only the needed books was put in the shelves , if there was not enough books then the answer was no, if possible the answer is yes.