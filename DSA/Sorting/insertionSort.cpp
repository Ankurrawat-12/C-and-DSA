#include<iostream>
#include<vector>

using namespace std;

vector<int> insertionSort(vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        int j = i - 1;
        int key = arr[i];
        while(j >= 0 && arr[j] > key){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr;

    // 20 5  40 60 10 30  i = 1
    // 5  20 40 60 10 30  i = 2
    // 5  20 40 60 10 30  i = 3
    // 5  20 40 60 10 30  i = 4
    // 5  10 20 40 60 30  i = 5
    // 5  10 20 30 40 60  i = 6

    // Best Case Theta(n) Already Sorted
    // Worst Case Theta(n^2) Reverse Sorted
    // Average Case Theta(n^2)
    
    // In-Place and stable
    // Used in practice for small arrays(TimSort and IntroSort)
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

    arr = insertionSort(arr);
    for(auto i: arr){
        cout<<i<<" ";
    }
}