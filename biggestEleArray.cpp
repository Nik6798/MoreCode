#include <iostream>
using namespace std;

int Big(int ar[], int n)
{
    int x;
    if (n == 1)
    {
        return ar[0];
    }
    else
    {
        x = Big(ar, n - 1);
    }
    if (x > ar[n - 1])
    {
        return x;
    }
    else
    {
        return ar[n - 1];
    }
}

int main()
{
    int arr[] = {1, 3, 2, 999, 23, 88, 34, 100};
    cout << Big(arr, sizeof(arr) / 4);
}