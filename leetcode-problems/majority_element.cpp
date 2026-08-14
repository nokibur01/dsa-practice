// https://leetcode.com/problems/majority-element/

#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> &nums)
{
    int freq = 1, el = nums[0];
    for (int i = 1; i < nums.size(); i++)
    {
        if (el != nums[i])
            freq--;
        else
            freq++;
        if (freq < 0)
        {
            el = nums[i];
            freq = 1;
        }
    }
    return el;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &val : v)
        cin >> val;
    cout << solution(v) << endl;
}