#include <iostream>
#include <array>
#include <iterator>
#include <vector>
using namespace std;

//main logic behind finding the duplicate without using extra space and with time complexity O(n)
void Duplicate(array<int,10> arr)
{
    vector<int> a;
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0)
        {
            a.push_back(index + 1);
        }
        arr[index] *= (-1);
    }
    for (int i : a)
    {
        cout << i << " ";
    }
}

int main()
{
    array<int, 10> ar{2, 3, 4, 4, 3, 2, 5, 6, 5, 6};
    Duplicate(ar);
    cout << "\n";
    for (int i : ar)
    {
        cout << i << " ";
    }
    return 0;
}