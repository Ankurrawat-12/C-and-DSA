#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int size;
    cin>>size;
    int array[size];
    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    unordered_map<int, int> map;
    for(int i = 0; i < size; i++){
        // * Increase the value of the key in the map
        map[array[i]]++;
        /*
        auto it = map.find(array[i]);
        if(it != map.end()){
            it->second++;
        }
        else{
            // * map[array[i]] = 1;
            map.insert({array[i], 1});
        }
        */
    }
    for(auto it: map){
        cout<<it.first<<" "<<it.second<<"\n";
    }
    return 0;
    
}