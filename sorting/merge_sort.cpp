#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &v, int left, int mid, int right)
{
    int n1 = mid - left + 1;
    int n2 = right - mid;
    vector<int> temp1(n1), temp2(n2);
    for (int i = 0; i < n1; i++)
    {
        temp1[i] = v[left + i];
    }
    for (int i = 0; i < n2; i++)
    {
        temp2[i] = v[mid + i + 1];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2)
    {
        if (temp1[i] < temp2[j])
        {
            v[k] = temp1[i];
            i++;
        }
        else
        {
            v[k] = temp2[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        v[k++] = temp1[i++];
    }
    while (j < n2)
    {
        v[k++] = temp2[j++];
    }
}

void mergeSort(vector<int> &v, int left, int right)
{
    if (left >= right)
        return;
    int mid = left + (right - left) / 2;
    mergeSort(v, left, mid);
    mergeSort(v, mid + 1, right);
    merge(v, left, mid, right);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {-10, 20, -25, 12, 5, 0, 1, 5, -1, 5, 11, 12};
    int n = v.size();
    mergeSort(v, 0, n - 1);
    for (auto val : v)
        cout << val << " ";

    return 0;
}

// In Merge Sort, the array is first divided into two halves.
// These halves are divided again and again until each subarray contains only one element.
// Then the merge process begins.
// The merge function takes three parameters: left, mid, and right.
// The 'mid' index is used to identify where the array was divided into two halves.
// The elements from both sorted halves are compared and merged into a single sorted array.
// This process continues until the entire array is merged into one sorted array.

// Time Complexity: O(n log n)
// Space Complexity: O(n)