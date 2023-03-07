#include<bits/stdc++.h>

using namespace std;

double raisePower(double m, int n = 2){
    return pow(m, n);
}

int main() {
    double m;
    int n;
    cout<<"Enter the value of m: - ";
    cin>>m;
    cout<<"Enter the value of n(for default enter -1): - ";
    cin>>n;
    if (n == -1){
        cout<<"Default: - "<<raisePower(m)<<endl;
    }
    else{
        cout<<"m raised to the power n: - "<<raisePower(m, n)<<endl;
    }

    return 0;
}
