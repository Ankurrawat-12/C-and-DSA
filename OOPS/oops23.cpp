#include<bits/stdc++.h>

using namespace std;

class NumbersFriend;

class Numbers{
    private:
        int number1;
        int number2;
        friend class NumbersFriend;
    public:
        Numbers(int number1, int number2){
            this->number1 = number1;
            this->number2 = number2;
        }

};

class NumbersFriend{
    public:
        void print_sum(Numbers num){
            cout<<"Number 1 :- " + to_string(num.number1)<<endl;
            cout<<"Number 2 :- " + to_string(num.number2)<<endl;
            cout<<to_string(num.number1) + " + " + to_string(num.number2) + " = " + to_string(num.number1 + num.number2)<<endl;
        }
};

int main(){
    int number1, number2;
    cout<<"Enter two numbers: - ";
    cin>>number1>>number2;
    Numbers one(number1, number2);
    NumbersFriend onesFrined;
    onesFrined.print_sum(one);
}