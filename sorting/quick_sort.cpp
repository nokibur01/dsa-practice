#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &v, int low, int high)
{
    int i = low, j = high, pivat = v[low];
    while (i < j)
    {
        while (i < high && v[i] <= pivat)
            i++;
        while (j > low && v[j] > pivat)
            j--;
        if (i < j)
            swap(v[i], v[j]);
    }
    swap(v[low], v[j]);
    return j;
}

void quickSort(vector<int> &v, int low, int high)
{
    if (low >= high)
        return;
    int piavtIdx = partition(v, low, high);
    quickSort(v, low, piavtIdx - 1);
    quickSort(v, piavtIdx + 1, high);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    vector<int> v = {-5, -1, 0, 12, 5, 8, -9, 4, 1, 23, 21, -50};
    quickSort(v, 0, v.size() - 1);
    for (auto val : v)
        cout << val << " ";

    return 0;
}

/*
Quick Sort starts by choosing a pivot element. The pivot can be the first,
last, middle, or any other element in the array. In this implementation,
the first element is used as the pivot.

The goal is to place the pivot in its correct position. All elements smaller
than or equal to the pivot should be on its left, and all greater elements
should be on its right.

Two pointers are used: one moves from the left and the other from the right.
If an element on the left is greater than the pivot and an element on the
right is smaller than or equal to the pivot, they are swapped. This process
continues until the two pointers cross. Then the pivot is swapped with the
right pointer, placing it in its correct position.

After the pivot is placed correctly, Quick Sort is applied recursively to
the left and right subarrays.

// Time Complexity:
// Best/Average: O(n log n)
// Worst: O(n²)

// Space Complexity:
// O(1) auxiliary space
*/