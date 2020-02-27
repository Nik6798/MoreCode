#include <bits/stdc++.h>
using namespace std;
int hourglassSum(vector<vector<int>> arr)
{
    vector<int> res;
    for (int j = 0; j < arr.size() - 2; j++)
    {
        for (int i = 0; i < arr.size() - 2; i++)
        {
            res.push_back(arr[i][j] + arr[i][j + 1] + arr[i][j + 2] + arr[i + 1][j + 1] + arr[i + 2][j] + arr[i + 2][j + 1] + arr[i + 2][j + 2]);
        }
    }
    return *max_element(res.begin(),res.end());
}
int main()
{
    vector<vector<int>> ar{
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}};
    cout << hourglassSum(ar);
    return 0;
}