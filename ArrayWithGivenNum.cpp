#include <bits/stdc++.h>
using namespace std;

int ArrayStartWith(array<char, 6> arr)
{
    array<char, arr.size() * 2> res;
    int j = arr.size();
    for (int i = 0; i < j; i++)
    {
        res[i] = res[j + i] = arr[i];
    }
    for (char i : res)
    {
        cout << i << " ";
    }
}

//main
int main(int argc, char const *argv[])
{
    array<char, 6> ar = {'A', 'B', 'C', 'D', 'E', 'F'};
    ArrayStartWith(ar);
    return 0;
}
