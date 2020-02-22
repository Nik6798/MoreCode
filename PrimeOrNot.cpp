#include <bits/stdc++.h>
using namespace std;

//Prime or not prime main logic
string primeOrNot(int n)
{
    //num^2>=n
    int num = ceil(sqrt(n));
    if (n % 2 == 0)
    {
        if (n == 2)
        {
            return "Prime";
        }
        else
        {
            return "Not Prime";
        }
    }
    for (int i = 3; i < num; i+=2)
    {
        if (n % i == 0)
        {
            return "Not Prime";
        }
    }
    return "Prime";
}
int main()
{
    int num;
    cin >> num;
    cout<<primeOrNot(num);
}