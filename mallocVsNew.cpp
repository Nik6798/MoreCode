#include <iostream>
using namespace std;
typedef unsigned long long ull;
class Apple
{
    static int g;

public:
    static int x; // we can't initialize it here be
    Apple()
    {
        x++;
    }
    ~Apple()
    {
        x--;
    }

    void* operator new(size_t sz)
    {
        x++;
    }
};
int Apple::x = 0;
int Apple::g = 34;
int main()
{
    Apple a, b, c, d, e;
    Apple *ptr1 = (Apple *)malloc(sizeof(Apple)); // the malloc function will call constructor on it's own
    Apple *ptr = new Apple();                     //but when dynamically allocating memory with new it calls the const. automatically
    Apple *ptr2 = new Apple;
    // free(ptr); //it will work with the malloc type allocation or this is c-type deallocation.
    // free(ptr2);
    // delete ptr;
    // delete ptr2;
    cout << Apple::x << endl;
    // cout<<Apple::g<<endl;        even static members are not accesible if they are private.
    return 0;
}