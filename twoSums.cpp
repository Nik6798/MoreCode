#include <iostream>
#include <vector>
#include <map>
using namespace std;

//two sums fun.
vector<int> twoSum(vector<int> &nums, int target)
{
    map<int, int> val;
    for (int i = 0; i < nums.size(); i++)
    {
        int v = target - nums[i];
        val[v] = i;
    }
    for (int i = 0; i < nums.size(); i++)
    {
        //val [7,2,-2,-6]
        if (val.count(nums[i]))
        {
            if(val[nums[i]]!=i){
               return {val[nums[i]], i};  
            }
           
        }
    }
    return {};
}

int main()
{
    vector<int> a = {3, 2, 4, 6};
    a = twoSum(a, 6);
    for (int i : a)
    {
        cout << i << " ";
    }
    return 0;
}