#include<bits/stdc++.h>

using namespace std;

template<class A, class B>
void square(A base, B power){
    cout<<to_string(base) + "^" + to_string(power) + " = " + to_string(pow(base, power))<<endl;
}

int main(){
    int power, base;
    float power1, base1;
    cout<<"Enter The int base: - ";
    cin>>base;
    cout<<"Enter The int power: - ";
    cin>>power;
    cout<<"Enter The float base: - ";
    cin>>base1;
    cout<<"Enter The float power: - ";
    cin>>power1;
    square(base, power);
    square(base1, power1);
    square(base, power1);
    square(base1, power);
}