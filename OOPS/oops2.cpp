#include <bits/stdc++.h>

using namespace std;

class Complex{
    float real;
    float imag;
    public:
        Complex(){};
        Complex(float, float);
        Complex operator+(Complex);
        void display();
};

Complex::Complex(float real, float imag){
    this->real = real;
    this->imag = imag;
}

void Complex::display(){
    cout<<this->real<<" + "<<this->imag<<"i"<<endl;
}

Complex Complex::operator+(Complex c){
    Complex temp;
    temp.real = this->real + c.real;
    temp.imag = this->imag + c.imag;
    return temp;
}

int main() {
    Complex c1, c2, c3;
    float img1 , img2, real1, real2;
    cout<<"Enter the first Complex number's real part and imaginary part: - ";
    cin>>real1>>img1;
    cout<<"Enter the second Complex number's real part and imaginary part: - ";
    cin>>real2>>img2;
    c1 = Complex(real1, img1);
    c2 = Complex(real2, img2);
    c3 = c1 + c2;
    cout<<"First Complex number: - "<<endl;
    c1.display();
    cout<<"Second Complex number: - "<<endl;
    c2.display();
    cout<<"Their Sum: - "<<endl;
    c3.display();
}