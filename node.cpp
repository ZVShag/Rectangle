
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
    void Pointer(Point<int> d)
    {
        x = d.x;
        y = d.y;
    }
    double Len_storona(Point pt)
    {
       
        return pow(pow(x - pt.x, 2) + pow(y - pt.y, 2), 0.5);

    }
    void Print()
    {
        cout << this->x << "\t" << this->y << endl;
    }
    int Get_X()
    {
        return x;
    }
    int Get_Y()
    {
        return y;
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
    Point<int> dig1;
    Point<int> dig2;
    Rect() { a = 0; b = 0; c = 0; d = 0; dig1 = 0; dig2 = 0; }
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
        {
            dig1.Pointer(a);
            dig2.Pointer(b);
            return y * z;
        }
        if ((x < y) && (y > z))
        {
            dig1.Pointer(a);
            dig2.Pointer(d);
            return x * z;
        }
        if ((z > x) && (y < z))
        {
            dig1.Pointer(a);
            dig2.Pointer(c);
            return y * x;
        }
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
    Lst* next;
    Lst(){}
  
    Lst(Point<int> a)
    {
        p = a;
        next = nullptr;
    }
};
class Lst_Tree
{
    Lst* dot;

public:
    Lst_Tree()
    {
        dot = NULL;
        
    }
    void AddLst(Point<int> d)
    {
        Lst* nd = new Lst; 

        nd->p=d;        
        nd->next = NULL;     

        if (dot == NULL)     
            dot = nd;
        else                 
        {
            Lst* current = dot;
            while (current->next != NULL)
                current = current->next;
            current->next = nd;
        }
    }
    void PrintLst()
    {
        Lst* current = dot;

        while (current != NULL)
        {
            current->p.Print();
            current = current->next;
        }
    }
};


int main()
{

    Point<int> a(3,2);
    Point<int> b(3, 7);
    Point<int> c(10, 7);
    Point<int> d(10, 2);
    Rect<Point<int>> r(a,b,c,d);
    r.Square();
    r.dig1.Print();
    r.dig2.Print();
  
    Lst_Tree Lst;

    for (int i = r.dig1.Get_X(); i <= r.dig2.Get_X(); i++)
        for (int j = r.dig1.Get_Y(); j <= r.dig2.Get_Y(); j++)
        {
            Point<int> s(i, j);
            Lst.AddLst(s);
        }
    Lst.PrintLst();


    
    
}

