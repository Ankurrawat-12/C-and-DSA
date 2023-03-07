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

void quickSort(vector<int> &arr, int low, int high){
    // if(low < high){
    //     int pivot = lumotoPartition(arr, low, high);
    //     quickSort(arr, low, pivot -1);
    //     quickSort(arr, pivot + 1, high);
    // }
    if(low < high){
        int pivot = hoaresPartition(arr, low, high);
        quickSort(arr, low, pivot);
        quickSort(arr, pivot + 1, high);
    }
    // Divide and conquer algo
    // worst cas time : O(n^2)
    // despite O(n^2), it is considered the fastest because:
    //      a) InPlace
    //      b) Cache Friendly
    //      c) Average Case: O(n log(n))
    //      d) Tail Recursive
    // Partition is key function(Naive, Lumoto's , Hoare's)
}


int main(){
    int size;
    cout<<"Enter the size of the array: - ";
    cin>>size;
    vector<int> arr;
    cout<<"Enter the Elements of the array: -"<<endl;
    for(int i = 0; i < size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    quickSort(arr, 0 , size - 1);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}