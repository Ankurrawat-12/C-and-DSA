#include<iostream>
#include<unordered_set>

using namespace std;

int main(){
    int size;
    cin>>size;
    
    int array[size];

    for (int i = 0; i < size; i++)
    {
        cin>>array[i];
    }
    int sum;
    cin>>sum;
    
    // ! Did not work for some testcases
    /*
    for(int i = 1; i < size; i++){
        if(array[i-1] + array[i] == 0){
            cout<<"Yes";
            return 0;
        }
        else if(array[i-1] + array[i] < array[i]){
            array[i] = array[i-1] + array[i];
        }
    }
    cout<<"No";
    */


    // * Efficient Solution
    int pre_sum = 0;
    unordered_set<int> set;

    for(int i = 0; i < size; i++){
        pre_sum += array[i];
        if(set.find(pre_sum - sum) != set.end() || pre_sum == sum){
            cout<<"Yes";
            return 0;
        }
        else
            set.insert(pre_sum);
    }
    cout<<"No";
    
    return 0;
}