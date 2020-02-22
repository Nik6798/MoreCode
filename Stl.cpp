#include <bits/stdc++.h>
using namespace std;
#define fo(i, n)                \
    for (int i = 0; i < n; i++) \
        ;
template <typename... T>
void write(T &... args)
{
    ((cout << args << " "), ...);
}
template <typename... W>
void read(W &... args)
{
    ((cin >> args), ...);
}
// #define deb(x) cout << #x << " " << x << endl;
int main()
{
    fo(i, 5)
    {
        cout << i;
    }
    int x(100), y(200), a, b;
    read(x, y, a, b);
    write(x, y, a, b);
}