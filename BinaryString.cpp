#include <iostream>
using namespace std;

int ar[3];

//main logic behind the all the binary string combination using recursion and backtracking
void binarystring(int n)
{
    if (n == 1)
    {
        for (int i : ar)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    else
    {
        ar[n - 1] = 0;
        binarystring(n - 1);
        ar[n - 1] = 1;
        binarystring(n - 1);
    }
}
int main()
{
    binarystring(3);
}