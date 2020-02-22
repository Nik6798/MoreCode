#include <iostream>
using namespace std;

//print logic
void print(int n)
{
    if (n < 1)
    {
        return;
    }
    cout << n << " ";
    print(n - 1);
    cout << n << " ";
    return;
}

int main()
{
    print(2);
}