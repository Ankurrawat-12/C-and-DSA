#include<iostream>
#include<vector>

using namespace std;


vector<int> merge(vector<int> arr, int low, int mid, int high){
    vector<int> arr1, arr2;
    for(int i = low; i <= mid; i++){
        arr1.push_back(arr[i]);
    }
    for(int i = mid + 1; i <= high; i++){
        arr2.push_back(arr[i]);
    }
    
    int i = 0;
    int j = 0;
    int k = 0;
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
    return arr;

}

int main(){

    int size;
    // cout<<"Enter the size of the first array: - ";
    cin>>size;

    vector<int> arr;
    // cout<<"Enter the Elements of the First array: -"<<endl;
    for(int i = 0; i < size; i++){
        int element;
        cin>>element;
        arr.push_back(element);
    }
    int low, mid, high;
    // cout<<"Enter Low of the array: -";
    cin>>low;
    // cout<"Enter Mid of the array: -";
    cin>>mid;
    // cout<<"Enter High of the array: -";
    cin>>high;

    vector<int> newArr = merge(arr, low, mid, high);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
}