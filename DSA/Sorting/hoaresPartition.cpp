#include<iostream>
#include<vector>

using namespace std;

int hoaresPartition(vector<int>& arr, int low, int high){
    int pivot = arr[low];
    int i = low - 1;
    int j = high + 1;
    while(true){
        do{
            i++;
        }while(arr[i] < pivot);
        do{
            j--;
        }while(arr[j] > pivot);
        if(i >= j){
            return j;
        }
        swap(arr[i], arr[j]);
    }
    return (j);
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
    int i = hoaresPartition(arr,0, size - 1);
    cout<<"Elements after partition: - "<<endl;
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}