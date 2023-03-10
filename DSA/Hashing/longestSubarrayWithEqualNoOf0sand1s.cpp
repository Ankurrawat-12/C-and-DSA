#include<iostream>
#include<unordered_map>

using namespace std;

int main(){
    int size;
    cin>>size;

    int array[size];

    for(int i = 0; i < size; i++){
        cin>>array[i];
    }
    // ! Naive Solution  
    /*
    int length = 0;
    for(int i = 0; i < size; i ++){
        int c1 = 0, c0 = 0;
        for(int j = i; j < size; j++){
            if(array[j] == 0)
                c0++;
            else
                c1++;
            if(c1 == c0){
                length = max(length, j - i + 1);
            }
        }
    }
    cout<<length;
    */
    
    // * Efficient Solution
    unordered_map<int, int> map;
    int longestArray = 0, preSum = 0;

    for(int i = 0; i < size; i++){
        if(array[i] == 0)
            preSum -= 1;
        else
            preSum += 1;
        if(preSum == 0)
            longestArray = i +1;
        if(map.find(preSum) == map.end())
            map[preSum] = i;
        else
            longestArray = max(longestArray, i - map[preSum]);
    }
    cout<<longestArray;
}
