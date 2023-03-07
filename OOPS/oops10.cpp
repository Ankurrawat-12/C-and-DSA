#include <iostream>
using namespace std;

class Point
{
public:
    int x, y;

public:
    void get()
    {
        cout <<"Enter x and y: ";
        cin >> x >> y;
    }
    string display()
    {
        string cordinates = to_string(x) + " ," + to_string(y);
        return cordinates;
    }
    friend Point operator-(Point &);
};

Point operator-(Point &t1, Point &t2)
{
    Point z;
    z.x = t1.x - t2.x;
    z.y = t1.y - t2.y;
    return z;
}

int main()
{
    Point point1, point2, point3;
    point1.get();
    point2.get();
    point3 = point1 - point2;
    cout<<"Distance between "<<point1.display()<<" and "<<point2.display()<<" is "<<point3.display();
    return 0;
}
