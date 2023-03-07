#include<algorithm>
#include<iostream>


using namespace std;

struct Point{
    int x, y;
};

bool comp(Point p1, Point p2){
    return( p1.x > p2.x);
}

int main(){
    Point points[] = {
        {3, 10}, {5, 4}, {2, 8}
        };
    int n = 4;
    sort(points, points + n, comp); // nlog(n)   uses Intro sort(Hybrid of quick sort, heap sort, insertion sort)

    for(auto i: points){
        cout<<i.x<<" "<<i.y<<endl;
    }
}