#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n, int k)
{
    for (int i = 0; i < k; i++)
    {
        int first = arr[0];
        for (int i = 1; i < n; i++)
        {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = first;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Time complexity O(n2)
}

void better(int arr[], int n, int k)
{
    int brr[k];
    for (int i = 0; i < k; i++)
    {
        brr[i] = arr[i];
    }
    int j = k;
    for (int i = 0; i < n; i++)
    {
        if (j < n)
        {
            arr[i] = arr[j];
            j++;
        }
        else
        {
            arr[i] = brr[i + k - n];
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Time complexity O(n+d)
    // Space complexity O(d)
}

void optimal(int arr[], int n, int k)
{
    reverse(arr, arr + k);
    reverse(arr + k, arr + n);
    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Time complexity O(k+n-k+n) = O(2n)
    // Space complexity O(1)
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int arr[n];
    for (auto &val : arr)
        cin >> val;
    int k; // rotate the array by k places
    cin >> k;
    k %= n;
    // bruteForce(arr, n, k);
    // better(arr, n, k);
    optimal(arr, n, k);

    return 0;
}