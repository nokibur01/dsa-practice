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

void optimal(int arr1[],int n1,int arr2[],int n2){
    
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr1[6] = {1, 1, 2, 3, 4, 5}, arr2[5] = {2, 3, 4, 4, 5};
    bruteForce(arr1, 6, arr2, 5);

    return 0;
}