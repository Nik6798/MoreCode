#include <iostream>
using namespace std;

//class
class Point
{
public:
    Point()
    {
        cout << "constructor is called\n";
    }

    Point(const Point &a)
    {
        cout << "copy constructor is called\n";
    }
};

int main()
{
    Point *t1, *t2;
    t1 = new Point();
    t2 = new Point(*t1);
    Point t3 = *t1;
    Point t4 = t3;
    return 0;
}
