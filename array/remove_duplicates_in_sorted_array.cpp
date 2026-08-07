#include <bits/stdc++.h>
using namespace std;

int optimalApproach(int arr[], int n)
{
    int i = 0, j = 1;
    while (j < n)
    {
        if (arr[i] != arr[j])
        {
            swap(arr[++i], arr[j]);
        }
        j++;
    }
    return i;
}

void bruteForce(int arr[], int n)
{
    map<int, int> mp;
    for (int i = 0; i < n; i++)
        mp[arr[i]]++;
    for (auto val : mp)
        cout << val.first << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    cout << "*enter a sorted array with duplicate elements*" << endl;
    for (auto &val : arr)
        cin >> val;

    int idx = optimalApproach(arr, n);
    for (int i = 0; i <= idx; i++)
        cout << arr[i] << " ";

    // bruteForce(arr, n);

    return 0;
}