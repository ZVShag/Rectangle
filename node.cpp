
#include <iostream>
using namespace std;
template<typename V>
class Point
{
    V x;
    V y;
public:
    Point()
    {
        this->x = 0;
        this->y = 0;
    }
    Point(V other_x, V other_y)
    {
        x = other_x;
        y = other_y;
    }
    double Len_storona(Point pt)
    {
       
        return pow(pow(x - pt.x, 2) + pow(y - pt.y, 2), 0.5);

    }
};
template<typename Z>
class Rect
{
    Point<int> a;
    Point<int> b;
    Point<int> c;
    Point<int> d;
public:
    Rect() { a = 0; b = 0; c = 0; d = 0; }
    Rect(Z x, Z y, Z z, Z w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
    void Perimetr()
    {

    }
    double Min_len_square(double x, double y, double z)
    {
        if ((x > y) && (x > z))
            return y * z;
        if ((x < y) && (y > z))
            return x * z;
        if ((z > x) && (y < z))
            return y * x;
    }

    double Square()
    {
        double x= a.Len_storona(b);
        double y=a.Len_storona(d);
        double z=a.Len_storona(c);
        return (Min_len_square(x, y, z));


    }
   


};
struct Lst
{
    Point<int> p;
    Point<int>* next;
    Lst(Point<int> a)
    {
        p = a;
        next = nullptr;
    }
};


int main()
{
    Point<int> a(3,2);
    Rect<Point<int>> r(a,a,a,a);
    Point<int> b(3, 5);
    a.Len_storona(b);
    
}

