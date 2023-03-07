#include<iostream>
#include<vector>

using namespace std;


vector<int> bubbleSort(vector<int> arr){
    for(int i = 0; i < arr.size(); i++){
        bool sorted = true;
        for(int j = 0; j < arr.size()- i -1; j ++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                sorted = false;
            }
        }
        if (sorted){
            break;
        }
    }
    return arr;
    // Time Complexity Theta(n^2);  // for normal 
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

    arr = bubbleSort(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
}