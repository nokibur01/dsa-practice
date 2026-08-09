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

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[10] = {1, 2, 3, 1, 1, 1, 1, 4, 2, 3};
    int n = 10;
    int sum = 30;

    bruteForceSolution(arr, n, sum);

    return 0;
}