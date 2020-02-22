#include <iostream>
using namespace std;
int main()
{
    string s = "0000000000000000000000000000000000000000000000000";
    // printf("%i\n", s.size());
    cout << s.size();
    // cout.flush();
    int arr[10] = {1, 2};
    for (int i : arr)
    {
        cout << i << " ";
    }
}