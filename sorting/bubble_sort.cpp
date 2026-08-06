#include <bits/stdc++.h>
using namespace std;

vector<int> bubbleSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        bool isSorted = true;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (v[j] > v[j + 1])
            {
                swap(v[j], v[j + 1]);
                isSorted = false;
            }
        }
        if (isSorted)
            break;
    }
    return v;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {-9, 8, -10, 25, 22, 14, 15, -1, 0};
    v = bubbleSort(v);
    for (auto val : v)
        cout << val << " ";

    return 0;
}

// time complexity O(n2) , best O(n)
// space complexity O(1)