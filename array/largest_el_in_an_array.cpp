#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {3, 2, 1, 5, 2};
    int largestEl = INT_MIN;
    for (auto val : arr)
    {
        if (val > largestEl)
            largestEl = val;
    }
    cout << largestEl << endl;

    return 0;
}