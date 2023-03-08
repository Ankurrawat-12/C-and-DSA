#include<iostream>
#include<unordered_set>
#include<vector>


using namespace std;


int main(){
    unordered_set<int> unorderedSet;
    unorderedSet.insert(9);
    unorderedSet.insert(10);
    unorderedSet.insert(12);
    unorderedSet.insert(11);
    for(int i: unorderedSet){
        cout<<i<<endl;
    }
}