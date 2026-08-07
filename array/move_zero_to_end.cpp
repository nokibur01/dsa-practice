#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n)
{
    int brr[n] = {0};
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] != 0)
        {
            brr[i] = arr[j];
            i++;
        }
    }
    for (int j = 0; j < n; j++)
    {
        if (i > j)
            arr[j] = brr[j];
        else
            arr[j] = 0;
    }
    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    cout << endl;

    // Time complexity O(2n)
    // Space complexity O(n)
}

void optimal(int arr[], int n)
{
    int i = 0, j = 0;
    while (i < n && arr[i])
        i++;
    j = i + 1;
    while (j < n)
    {
        if (arr[j])
        {
            swap(arr[i], arr[j]);
            i++;
        }
        j++;
    }

    for (int j = 0; j < n; j++)
        cout << arr[j] << " ";
    cout << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[] = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    // bruteForce(arr, 10);
    optimal(arr, 10);

    return 0;
}