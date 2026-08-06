#include <bits/stdc++.h>
using namespace std;

vector<int> selectionSort(vector<int> &v)
{
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        int minIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (v[j] < v[minIdx])
            {
                minIdx = j;
            }
        }
        swap(v[minIdx], v[i]);
    }
    return v;
}

int main()
{

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {-9, 8, -10, 25, 22, 14, 15, -1, 0};
    v = selectionSort(v);
    for (auto val : v)
        cout << val << " ";

    return 0;
}

// time complexity O(n2) , best O(n2)
// space complexity O(1)