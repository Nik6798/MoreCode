#include <iostream>
using namespace std;

//main logic
int sum(int x, int y)
{
    if (x < 1)
    {
        return y;
    }
    else
    {
        return sum(x - 1, x+y);
    }
}
int main()
{
    cout<<sum(5, 0);
}