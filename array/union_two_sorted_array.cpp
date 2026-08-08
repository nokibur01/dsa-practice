#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr1[], int n1, int arr2[], int n2)
{
    map<int, int> mp;
    int i = 0, j = 0;
    while (i < n1 || j < n2)
    {
        if (i < n1)
        {
            mp[arr1[i]]++;
            i++;
        }
        if (j < n2)
        {
            mp[arr2[j]]++;
            j++;
        }
    }
    for (auto val : mp)
        cout << val.first << " ";
    cout << endl;

    // Time complexity O(n log 2n) , n=n1+n2
}

void optimal(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < n1 && j < n2)
    {
        if (arr1[i] < arr2[j])
        {
            if (v.empty() || !v.empty() && v.back() != arr1[i])
                v.push_back(arr1[i]);
            i++;
        }
        else
        {
            if (v.empty() || !v.empty() && v.back() != arr2[j])
                v.push_back(arr2[j]);
            j++;
        }
    }
    while (i < n1)
    {
        if (v.back() != arr1[i])
            v.push_back(arr1[i]);
        i++;
    }
    while (j < n2)
    {
        if (v.back() != arr2[j])
            v.push_back(arr2[j]);
        j++;
    }
    for (auto val : v)
        cout << val << " ";
    cout << endl;

    // In the optimal approach, we use the two-pointer technique.It compares the elements of both arrays and insert the smaller element into the vector if it is not already present.After one array is checked,the remaining elements  of the other array is checked and inserted if they are not duplicates.

    // Time Complexity: O(n1 + n2)
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr1[6] = {1, 1, 2, 3, 4, 5}, arr2[5] = {2, 3, 4, 4, 5};
    // bruteForce(arr1, 6, arr2, 5);
    optimal(arr1, 6, arr2, 5);

    return 0;
}