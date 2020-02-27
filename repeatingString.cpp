#include <bits/stdc++.h>
using namespace std;
long repeatedString(string s, long n)
{
    long rep = n / s.size(), count = 0;
    map<long, long> a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'a')
        {
            count++;
        }
        a[i+1] = count;
    }
    if (n % s.size())
        return (rep * count) + a[n % s.size()];
    return (rep * count);
}

int main()
{
    string s = "abqbqqbaaa";
    cout << repeatedString(s, 10000000);
    return 0;
}