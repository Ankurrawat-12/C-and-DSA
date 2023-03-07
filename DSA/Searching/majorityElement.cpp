#include<iostream>
#include<vector>

using namespace std;


int majorityElement(vector<int> arr){
    int res = 0,  count = 1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[res] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count == 0){
            res = i;
            count = 1;
        }
    }
    count = 0;
    for(int i = 0; i < arr.size(); i++){
        if(arr[res] == arr[i]){
            count ++;
        }
    }
    if(count <= (arr.size()/2)){
        res = -1;
    }
    return res;
}


int main(){
    int size;
    vector<int> arr;
    cout<<"Enter the size of the array: ";
    cin>>size;
    for(int i = 0; i< size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"The majority element is at index: "<<majorityElement(arr);
}
