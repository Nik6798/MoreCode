#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//our main logic
ll logic(ll n)
{
    if (n == 1)
    {
        return n;
    }
    return n%10==0?logic(n/10):0||n%20==0?logic(n/20):0;
}

int main()
{
    ll x;
    cin>> x;
    if (logic(x))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}