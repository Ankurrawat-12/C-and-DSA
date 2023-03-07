#include<bits/stdc++.h>

using namespace std;

class Numbers{
    int a, b, c;
    public:
        Numbers(){};
        Numbers(int, int, int);
        void operator++();
        void display();
};

Numbers::Numbers(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
    cout<<"After Initializing"<<endl;
    this->display();
}

void Numbers::display(){
    cout<<"a: - "<<this->a<<" b: - "<<this->b<<" c: - "<<this->c<<endl;
}

void Numbers::operator++(){
    cout<<"After Incrementing"<<endl;
    this->a++;
    this->b++;
    this->c++;
    this->display();
}

int main(){
    Numbers no1, no2, no3;
    no1 = Numbers(4, 7, 9);
    no2 = Numbers(18, 73, 49);
    no3 = Numbers(6, -75, 57);
    ++no1;
    ++no2;
    ++no3;
    ++no1;
}