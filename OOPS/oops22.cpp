#include<bits/stdc++.h>

using namespace std;

template<class A, class B>
class Sum{
    private:
        A number1;
        B number2;
    public:
        Sum(A number1, B number2){
            this->number1 = number1;
            this->number2 = number2;
            print_sum();
        }
        void print_sum(){
            cout<<"Number 1 :- " + to_string(number1)<<endl;
            cout<<"Number 2 :- " + to_string(number2)<<endl;
            cout<<to_string(number1) + " + " + to_string(number2) + " = " + to_string(number1 + number2) <<endl;
        }
};

int main(){
    int number1, number2;
    cout<<"Enter 1st number :- ";
    cin>>number1;
    cout<<"Enter 2nd number :- ";
    cin>>number2;
    Sum<int, int> numbers(number1, number2);
    float number3, number4;
    cout<<"Enter 3rd number :- ";
    cin>>number3;
    cout<<"Enter 4th number :- ";
    cin>>number4;
    Sum<float, float> numbers2(number3, number4);
    Sum<float, int> numbers3(number3, number2);
}