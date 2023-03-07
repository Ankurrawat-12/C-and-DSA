#include<iostream>
#include<vector>

using namespace std;


vector<int> merge(vector<int> arr1, vector<int> arr2){

    int size1 = arr1.size() - 1;
    int size2 = arr2.size() - 1;
    int i  = 0;
    int j = 0;
    vector<int> arr;

    while((i <= size1) && (j <= size2)){
        if(arr1[i] >= arr2[j]){
            arr.push_back(arr2[j]);
            j++;
        }
        
        else{
            arr.push_back(arr1[i]);
            i++;
        }
    }

    if(i == size1){
        for(; j <= size2; j++){
            arr.push_back(arr2[j]);
        }
    }

    else if(j == size2){
        for(; i <= size1; i++){
            arr.push_back(arr1[i]);
        }
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

    int size2;
    // cout<<"Enter the size of the Second array: - ";
    cin>>size2;

    vector<int> arr2;
    // cout<<"Enter the Elements of the Second array: -"<<endl;
    for(int i = 0; i < size2; i++){
        int element;
        cin>>element;
        arr2.push_back(element);
    }

    vector<int> newArr = merge(arr, arr2);
    for(int i = 0; i < newArr.size(); i++){
        cout<<newArr[i]<<" ";
    }
}