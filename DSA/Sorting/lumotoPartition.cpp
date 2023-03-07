#include<iostream>
#include<vector>

using namespace std;

int lumotoPartition(vector<int>& arr, int low, int high){
    int pivot = arr[high];
    int i = low - 1;
    for(int j = low; j <= high-1; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return (i + 1);
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
    int i = lumotoPartition(arr,0, size - 1);
    cout<<"Elements after partition: - "<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}