#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int size;
    cin>>size;
    int array[size];
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    // unordered_set<int> set;
    // for(int i = 0; i < size; i++){
    //     set.insert(array[i]);
    // }
    unordered_set<int> set(array, array+size);
    cout<<set.size()<<endl;
}