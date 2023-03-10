#include<iostream>
#include<unordered_map>

using namespace std;

class Solution {
    public:
        int longestCommonSpanWithSameSumInTwoBinaryArrays(int arr1[], int arr2[], int n){
            unordered_map<int, int> map;
            int preSum = 0, longestArray = 0;
            for(int i = 0; i < n; i++){
                preSum += arr1[i] - arr2[i];
                if(preSum == 0)
                    longestArray = i + 1;
                if(map.find(preSum) == map.end())
                    map[preSum] = i;
                if(map.find(preSum) != map.end())
                    longestArray = max(longestArray, i - map[preSum]);
            }
            return longestArray;
        }
};

int main(){
    Solution solution;
    int n;
    cin>>n;
    
    int arr1[n], arr2[n];

    for(int i = 0; i < n; i++){
        cin>>arr1[i];
    }

    for(int i = 0; i < n; i++){
        cin>>arr2[i];
    }

    cout<<solution.longestCommonSpanWithSameSumInTwoBinaryArrays(arr1, arr2, n);

}