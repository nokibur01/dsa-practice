#include <bits/stdc++.h>
using namespace std;

void bruteForceSolution(int arr[], int n, int sum)
{
    pair<int, int> p = {0, -1};
    int freq = 0;
    for (int i = 0; i < n; i++)
    {
        int s = 0;
        for (int j = i; j < n; j++)
        {
            s += arr[j];
            if (s == sum)
            {
                int a = max(freq, j - i + 1);
                if (a > freq)
                {
                    freq = a;
                    p = {i, j};
                }
                break;
            }
        }
    }
    for (int i = p.first; i <= p.second; i++)
        cout << arr[i] << ',';
}

void better(int arr[], int n, int sum)
{
    map<long long int, int> mp;
    int len = 0;
    long long int s = 0;
    mp[0] = 0;
    for (int i = 0; i < n; i++)
    {
        s += arr[i];
        if (mp.find(s - sum) != mp.end())
        {
            int a = i + 1 - mp[s - sum];
            len = max(a, len);
        }
        if (mp.find(s) == mp.end())
            mp[s] = i + 1;
    }
    cout << len << endl;
}

void optimal(int arr[], int n, int sum)
{
    int i = 0, j = 0, len = 0;
    long long int s = arr[0];
    while (j < n)
    {
        if (s > sum)
        {
            s -= arr[i++];
        }
        else if (s < sum)
        {
            if (j != n - 1)
                s += arr[++j];
        }
        else
        {
            len = max(len, j - i + 1);
            if (j != n - 1)
                s += arr[++j];
        }
    }
    cout << len << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[15] = {10, 2, 3, 1, 1, 1, 1, 4, 2, 3, 0, 0, 0, 0, 0};
    int n = 15;
    int sum = 3;

    // bruteForceSolution(arr, n, sum);
    // better(arr, n, sum);
    optimal(arr, n, sum);

    return 0;
}

/*
better : In the optimal approach the technique used prefix sum. Each element sum's to it, and then subtract the sum, if there is a subarray then the subtraction takes to that position.
Instead of mp[s-sum] used mp.find(s-sum) because if there is not mp[s-sum] then it will creat an element with mp[s-sum], increasing the size, but find takes o(log n)time.
Again in the last checking if the sum is already exist, if already exist we don't increase the sum with current index, as it will reduce the longest size.
*/

/*
optimal: two pointer technique, if the sum is less then the required, add the next one if it's in the boundary, if exceed the sum, remove the first one, and if it's the sum then take the length and sum the next one if it's in the boundary.
time complexity : O(n+n)
*/