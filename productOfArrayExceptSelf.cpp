#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int> arr)
{
    int product = 1;
    vector<int> res;
    for (int i : arr)
    {
        product *= i;
    }
    for (int i : arr)
    {
        res.push_back(product / i);
    }
    return res;
}

vector<int> productwithoutDivision(vector<int> arr)
{
    int n = arr.size();
    vector<int> left(n), right(n), res(n);

    left[0] = 1;
    right[n - 1] = 1;
    for (int i = 1; i < n; i++)
    {
        left[i] = arr[i - 1] * left[i - 1];
    }
    for (int i = n - 2; i >= 0; i--)
    {
        right[i] = arr[i + 1] * right[i + 1];
    }

    for (int i = 0; i < n; i++)
    {
        res[i] = left[i] * right[i];
    }

    return res;
}

int main()
{
    vector<int> arr1, arr2{1, 2, 3, 4};
    arr1 = productExceptSelf(arr2);
    for (int i : arr1)
    {
        cout << i << " ";
    }
    cout << "\n";
    arr1 = productwithoutDivision(arr2);
    for (int i : arr1)
    {
        cout << i << " ";
    }
}