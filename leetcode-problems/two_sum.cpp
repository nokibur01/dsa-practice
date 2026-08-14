// https://leetcode.com/problems/two-sum/description/
#include <bits/stdc++.h>
using namespace std;

void solution()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int target;
    cin >> target;
    for (int i = 0; i < n; i++)
    {
        int a = target - v[i];
        if (mp.find(a) != mp.end() && mp[a] != i)
        {
            cout<<i<<" "<<mp[a]<<endl;
        }
        mp[v[i]] = i;
    }
}

int main()
{
    solution();

    return 0;
}