#include <bits/stdc++.h>
using namespace std;

int equalizeArray(vector<int> arr)
{
    map<int, int> res;
    int num = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (res.count(arr[i]))
        {
            res[arr[i]] += 1;
        }
        else
            res[arr[i]] = num;
    }
    int max = 0;
    for (auto i : res)
    {
        if (max < i.second)
            max = i.second;
    }

    return arr.size() - max;
}

int main()
{
    vector<int> ar{1, 2, 2, 3};
    cout << equalizeArray(ar);
    return 0;
}