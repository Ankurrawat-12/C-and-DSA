#include<iostream>
#include<vector>

using namespace std;

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> arr1, arr2;
    for(int i = low; i <= mid; i++){
        arr1.push_back(arr[i]); 
    }
    for(int i = mid + 1; i <= high; i++){
        arr2.push_back(arr[i]);
    }
    
    int i = 0;
    int j = 0;
    int k = low;
    while((i < arr1.size()) && (j < arr2.size())){
        if(arr1[i] >= arr2[j]){
            arr[k] = arr2[j];
            j++;
        }
        else{
            arr[k] = arr1[i];
            i++;
        }
        k++;
    }
    while(i < arr1.size()){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    while(j < arr2.size()){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    // return arr;

}

void mergeSort(vector<int> &arr ,int left ,int right){

    if(right > left){
        int mid = left + (right - left)/2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr,left, mid, right);
    }

    // 20 5  40 60 10 30  i = 1
    // 5  20 40 60 10 30  i = 2
    // 5  20 40 60 10 30  i = 3
    // 5  20 40 60 10 30  i = 4
    // 5  10 20 40 60 30  i = 5
    // 5  10 20 30 40 60  i = 6

    // Divide And Conquer Algorithm
    // Stable Algorithm
    // Theta(nlog(n)) Time Complexity and Theta(n) Aux Space
    // Well suited for linked lists,Works in Theta(1) Aux Space .
    // Used in External Sorting
    // In general for arrays, Quick Sort Outperforms
}


int main(){
    int size;
    // cout<<"Enter the size of the array: - ";
    cin>>size;
    vector<int> arr;
    // cout<<"Enter the Elements of the array: -"<<endl;
    for(int i = 0; i < size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }

    mergeSort(arr, 0 , size - 1);
    for(int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
}