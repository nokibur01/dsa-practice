#include <bits/stdc++.h>
using namespace std;

void optimalApproach(int arr[], int n)
{
    int largest = arr[0], secondLargest = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondLargest = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondLargest && arr[i] < largest)
            secondLargest = arr[i];
    }
    cout << secondLargest << endl;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[6] = {1, 2, 4, 7, 7, 5};
    int largestEl = INT_MIN;
    for (auto val : arr)
    {
        if (val > largestEl)
            largestEl = val;
    }
    int secondLargestEl = INT_MIN;
    for (auto val : arr)
    {
        if (val > secondLargestEl && val < largestEl)
            secondLargestEl = val;
    }
    if (secondLargestEl == INT_MIN)
        secondLargestEl = -1;
    cout << secondLargestEl << endl;

    optimalApproach(arr, 6);

    return 0;
}