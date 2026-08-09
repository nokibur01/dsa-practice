// https://leetcode.com/problems/pascals-triangle/description/?envType=problem-list-v2&envId=array

// problem no 118


#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> solution(int numRows)
{
    vector<vector<int>> ans(numRows);
    if (numRows == 1)
    {
        ans[0] = {1};
    }
    else if (numRows == 2)
    {
        ans[0] = {1};
        ans[1] = {1, 1};
    }
    else
    {
        ans[0] = {1};
        ans[1] = {1, 1};
        for (int i = 2; i < numRows; i++)
        {
            vector<int> v;
            v.push_back(1);
            int sz = ans[i - 1].size() - 1;
            for (int j = 0; j < sz; j++)
            {
                int sum = ans[i - 1][j] + ans[i - 1][j + 1];
                v.push_back(sum);
            }
            v.push_back(1);
            ans[i] = v;
        }
    }
    return ans;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int numRows;
    cin >> numRows;

    vector<vector<int>> ans = solution(numRows);
    for(auto val:ans){
        for(int i=0;i<val.size();i++){
            cout<<val[i]<<' ';
        }
        cout<<endl;
    }

    return 0;
}