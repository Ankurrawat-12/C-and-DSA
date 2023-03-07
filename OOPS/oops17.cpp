// Using the concept of function overloading, write function for calculating area of triangle, circle and
// rectangle.


#include <bits/stdc++.h>

using namespace std;

#define Pie 3.141592653589793238


void calculate_area(float length, float width){
    cout<<"Area of the recgtange is :- "<< to_string(length*width)<<endl;
}

void calculate_area(float radius){
    cout<<"Area of the Circle is :- "<< to_string(Pie * pow(radius, 2))<<endl;
}

void calculate_area(int base, int height){
    cout<<"Area of the recgtange is :- "<< to_string((base*height)/2)<<endl;
}


int main(){
    calculate_area(12.7);
    calculate_area(15.2f, 12.5f);
    calculate_area(6, 8);
}