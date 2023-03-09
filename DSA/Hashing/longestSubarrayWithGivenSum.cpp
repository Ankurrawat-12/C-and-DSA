#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int size, sum;
    cin>>size;

    int array[size];
    
    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    cin>>sum;

    unordered_map<int, int> map;

    int pre_sum = 0, largestSubarray = 0;
    for(int i = 0; i < size; i++){
        pre_sum+= array[i];
        if(pre_sum == sum){
            largestSubarray = i+1;
        }
        if(map.find(pre_sum) == map.end()){
            map.insert({pre_sum, i});
        }
        if(map.find(pre_sum - sum) != map.end()){
            largestSubarray = max(largestSubarray, i-map[pre_sum - sum]);
        }
    }
    cout<<largestSubarray<<endl;
}