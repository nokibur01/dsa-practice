// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/?envType=problem-list-v2&envId=array

// problem 121

#include <bits/stdc++.h>
using namespace std;

int bruteForce(vector<int> &v)
{

    int mxProfit = 0, n = v.size();
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n - 1; j++)
        {
            if (v[j] > v[i])
            {
                mxProfit = max(mxProfit, v[j] - v[i]);
            }
        }
    }

    return mxProfit;
}

int optimal(vector<int> &v)
{
    int mxProfit = 0;
    int i = 0, j = 1, n = v.size();
    while (j < n)
    {
        if (v[j] > v[i])
        {
            int profit = v[j] - v[i];
            mxProfit = max(profit, mxProfit);
            j++;
        }
        else
        {
            i = j;
            j++;
        }
    }
    return mxProfit;

    // In this problem, the technique was two pointer. One pointer tracks the lowest price till nth day and other tracks if there is a profit or not, if there is a profit then the maximum profit is stored, but if there is another one that is lower then the current lowest price then the pointer is updated(the one that tracks the lowest price).
    // Time complexity O(n) , n=v.size()
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<int> v = {7, 1, 5, 3, 6, 4};
    // cout<<bruteForce(v)<<endl;
    cout << optimal(v) << endl;
    return 0;
}