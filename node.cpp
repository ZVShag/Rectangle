
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
    double Square()
    {
        a.Len_storona(b)* b.Len_storona(c);
    }
   


};
struct lst
{
    Point<int> p;
    Point<int>* next;

};

int main()
{
    Point<int> a(3,2);
    Rect<Point<int>> r(a,a,a,a);
    Point<int> b(3, 5);
    a.Len_storona(b);
    
}

