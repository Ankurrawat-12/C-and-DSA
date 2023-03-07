#include<bits/stdc++.h>

using namespace std;

template<class A>
void display(A var, A var2){
    cout<<"Template Function"<<endl;
    cout<<"Sum of "<<var<<" + "<<var2<< ":- " <<(var + var2)<<endl;
}

void display(int var, int var2){
    cout<<"Normal Function"<<endl;
    cout<<"Sum of "<<var<<" + "<<var2<< ":- " <<var + var2<<endl;
}

int main(){
    string hell0 = "hello ", world = "world";
    int a = 12, b = 35;
    float e = 53.82, f = 942.2;
    display(hell0, world);
    display(a, b);
    display(e, f);
}