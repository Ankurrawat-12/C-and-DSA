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
    int longestArray = 0, preSum = 0;

    for(int i = 0; i < size; i++){
        preSum += array[i]; 
        if(preSum == sum)
            longestArray = i +1;
        if(map.find(preSum) == map.end())
            map[preSum] = i;
        if(map.find(preSum - sum) != map.end())
            longestArray = max(longestArray, i - map[preSum - sum]);
    }

    cout<<longestArray;
}