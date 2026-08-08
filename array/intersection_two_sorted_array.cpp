#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr1[], int n1, int arr2[], int n2)
{
    map<int, int> mp;
    for (int i = 0; i < n1; i++)
        mp[arr1[i]] = 1;
    for (int i = 0; i < n2; i++)
        if (mp[arr2[i]])
            mp[arr2[i]] = 2;
    for (auto val : mp)
    {
        if (val.second > 1)
            cout << val.first << " ";
    }
    cout << endl;

    // A brute force approach, where taking one for each element of the first array, then increasing the frequency if it's found in the second array too.
    // Time complexity O(n log n) n = n1+n2
}

void optimal(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;
    vector<int> v;
    while (i < n1 && j < n2)
    {
        if (arr1[i] == arr2[j] && (v.empty() || v.back() != arr1[i]))
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr1[i] > arr2[j])
        {
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    for (auto val : v)
        cout << val << " ";
    cout << endl;

    // It's a two pointer approach where two indexes traverse the two arrays untill there is a matching element, if the matching element is not in the vector container then it's added, else not.
    // Time complexity O(n) , n = (n1 + n2)
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr1[6] = {1, 1, 2, 3, 3, 5}, arr2[5] = {2, 3, 3, 6, 6};
    // bruteForce(arr1, 6, arr2, 5);
    optimal(arr1, 6, arr2, 5);

    return 0;
}