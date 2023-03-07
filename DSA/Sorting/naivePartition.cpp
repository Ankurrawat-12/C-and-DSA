#include<iostream>
#include<vector>

using namespace std;

void partition(vector<int>& arr, int low, int high, int pivotIndex){
    vector<int> temp;
    for(int i = low; i < high; i++){
        if(arr[i] <= arr[pivotIndex]){
            temp.push_back(arr[i]);
        }
    }
    for(int i = low; i < high; i++){
        if(arr[i] > arr[pivotIndex]){
            temp.push_back(arr[i]);
        }
    }
    for(int i = low; i < high; i++){
        arr[i] = temp[i - low];
    }
}


int main(){
    int size;
    cout<<"Enter the size of the array: - ";
    cin>>size;
    vector<int> arr;
    cout<<"Enter the elements of the array: - "<<endl;
    for(int i = 0; i < size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    cout<<"Enter the Pivot Index: - ";
    int pivotIndex;
    cin>>pivotIndex;
    partition(arr,0, arr.size(), pivotIndex);
    cout<<"Elements after partition: - "<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}