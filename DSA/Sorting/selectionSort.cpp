#include<iostream>
#include<vector>

using namespace std;

vector<int> selectionSort(vector<int> arr){
    for(int i = 0; i < arr.size()- 1; i++){
        int minIndex = i;
        for(int j = i+1; j < arr.size(); j ++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    return arr;
    // Time Complexity Theta(n^2);  // for normal 
    // Does Less Memory write compared to Quick, Merge, Insertion etc. Cycle Sort is optimal in terms of memory writes
    // Not stable
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

    arr = selectionSort(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
}