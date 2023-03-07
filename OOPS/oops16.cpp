#include<bits/stdc++.h>

using namespace std;

template<class T>
void swap(T *var1, T *var2){
    T temp = &var1;
    var1 = &var2;
    var2 = temp;
}


int main(){
    int a = 12, b = 21;
    float c = 34.87, d = 78.43;
    string e = "Ankur", f = "Rawat";
    char g = 'a', h = 'b';
    cout<<"Before Swap"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    cout<<"e = "<<e<<" f = "<<f<<endl;
    cout<<"g = "<<g<<" h = "<<h<<endl;
    swap(a, b);
    swap(c, d);
    swap(e, f);
    swap(g, h);
    cout<<"After Swap"<<endl;
    cout<<"a = "<<a<<" b = "<<b<<endl;
    cout<<"c = "<<c<<" d = "<<d<<endl;
    cout<<"e = "<<e<<" f = "<<f<<endl;
    cout<<"g = "<<g<<" h = "<<h<<endl;
}