// Create a base class called SHAPE. Use this class to store two double type values. Derive two specific
// classes called TRIANGLE and RECTANGLE from the base class. Add to the base class, a member
// function getdata to initialize base class data members and another member function display to compute
// and display the area of figures. Make display a virtual function and redefine this function in the derived
// classes to suit their requirements. Using these three classes design a program that will accept driven of a
// TRIANGLE or RECTANGLE interactively and display the area.

#include<bits/stdc++.h>

using namespace std;

class Shape{
    public:
        double height;
        double base;
        void get_data(){
            cout<<"Enter the base: - ";
            cin>>this->base;
            cout<<"Enter the height: - ";
            cin>>this->height;
        }
        virtual void display(){
            cout<<"This is base class";
        }
};


class Triangle:public Shape{
    public:
        Triangle(){
            get_data();
        }
        void display(){
            cout<<"Area of the triange is :- "<<(this->base*this->height)/2<<endl;
        }
};


class Rectangle:public Shape{
    public:
        Rectangle(){
            get_data();
        }
        void display(){
            cout<<"Area of the Rectangle is :- "<<this->base*this->height<<endl;
        }
};


int main(){
    double base, height;
    Triangle tri;
    tri.display();
    Rectangle rec;
    rec.display();
}