#include <iostream>
using namespace std;

//fun
void fun1(int n)
{
    int i = 0;
    if (n > 1)
    {
        fun1(n - 1);
    }
    cout << endl;
    for (i = 0; i < n; i++)
        printf(" * ");
}

int main()
{
    fun1(4);
}