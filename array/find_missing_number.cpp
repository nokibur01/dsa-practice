#include <bits/stdc++.h>
using namespace std;

void bruteForce(int arr[], int n)
{
    sort(arr, arr + n - 1);
    int missing = n;
    for (int i = 1; i < n; i++)
    {
        if (i != arr[i - 1])
        {
            missing = i;
            break;
        }
    }
    cout << "missing element is : " << missing << endl;

    // Time complexity : O(n+n log n)
}

void optimal(int arr[], int n)
{
    // using sum
    /*
    long long int totalSum = (n * (n + 1)) / 2, sum = 0;
    for (int i = 0; i < n-1; i++)
        sum += arr[i];
    cout << "missing element is : " << (totalSum - sum) << endl;
    */
    
    // using XOR;
    int xorAns = n;
    for(int i=0;i<n-1;i++){
        xorAns^=arr[i];
        xorAns^=i+1;
    }
    cout << "missing element is : " << xorAns << endl;

    // The XOR of a and a is 0, so if XORing all elements with number from 1 to n removes all the elements of the array only keeps the missing element, which is the answer.
    // Time complexity O(n);
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 10;
    int arr[n - 1] = {1, 10, 9, 8, 5, 6, 7, 3, 2};
    // bruteForce(arr, n);
    optimal(arr,n);

    return 0;
}