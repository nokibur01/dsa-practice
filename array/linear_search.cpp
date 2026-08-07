#include <bits/stdc++.h>
using namespace std;

void linearSearch(int arr[], int n, int k)
{
    int idx = -1;
    for (int i = 0; i < n; i++)
        if (arr[i] == k)
            idx = i;
    if (idx < 0)
        cout << "key not found!" << endl;
    else
        cout << "Key is at position " << idx + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {5, 7, 10, 80, 25, 12, 35, 13, 9, 11};
    int key;
    cin >> key;
    linearSearch(arr, 10, key);

    return 0;
}