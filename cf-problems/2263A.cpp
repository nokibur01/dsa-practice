#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int count_one = 0, count_zero = 0;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (num)
            count_one++;
        else
            count_zero++;
    }
    if (count_zero > count_one)
        cout << "Elsie" << endl;
    else
        cout << "Bessie" << endl;
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}