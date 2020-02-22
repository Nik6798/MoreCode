#include <iostream>
using namespace std;

void arrayWithIndex(int arr[], int s, int ind)
{
    for (int i = ind; i < s+ind; i++)
    {
        cout << arr[(i % s)] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int ar[] = {1, 3, 4, 5, 9};
    arrayWithIndex(ar, sizeof(ar) / 4, 2);
    return 0;
}
