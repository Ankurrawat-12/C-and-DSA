#include<iostream>
// #include<unordered_map>
#include<unordered_set>

using namespace std;

int main(){
    int sum;
    cin>>sum;

    int size;
    cin>>size;

    int array[size];
    
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }

    // ! This takes double the time. first it inserts then it searches for the other pair in the hash table.

    /*
    unordered_map<int, int> map;
    for(int i = 0 ; i < size; i++){
        map.insert({array[i], sum - array[i]});
    }

    for(auto i = map.begin(); i != map.end(); i++){
        auto iter = map.find(i->second);
        if(iter != map.end() && iter != i){
            cout<<"Yes";
            return 0;
        }
    }
    cout<<"No";
    */

    // * Better Approach, check's if the other pair is already in the set.
    // * TimeComplexity is O(n);
    // * SpaceComplexity is O(n);

    unordered_set<int> set;
    for(int i = 0; i < size; i++){
        if(set.find(sum - array[i]) != set.end()){
            cout<<"Yes";
            return 0;
        }
        else{
            set.insert(array[i]);
        }
    }
    cout<<"No";
}