#include <iostream>
#include <vector>

using namespace std;

double getMedian(vector<int> smallArray, vector<int> largeArray)
{
    int begin = 0;
    int end = smallArray.size();
    while (begin <= end)
    {
        int i1 = (begin + end) / 2;
        int i2 = ((smallArray.size() + largeArray.size() + 1) / 2) - i1;

        int min1 = (i1 == smallArray.size()) ? INT_MAX : smallArray[i1];
        int max1 = (i1 == 0) ? INT_MIN : smallArray[i1 - 1]; 

        int min2 = (i2 == largeArray.size()) ? INT_MAX : largeArray[i2];
        int max2 = (i2 == 0) ? INT_MIN : largeArray[i2 - 1]; 

        if((max1 <= min2) && (max2 <= min1)){
            if((smallArray.size() + largeArray.size())%2 == 0){
                return (double)(max(max1, max2) + min(min1, min2))/2;
            }
            else{
                return (double)(max(max1, max2));
            }
        }
        else if(max1 > max2){
            end = i1-1;
        }
        else{
            begin = i1 + 1;
        }
    }
    return 12;
}

int main()
{
    int size1, size2;
    vector<int> arr1, arr2;
    // cout << "Enter the size of the first array: - ";
    cin >> size1;
    // cout << "Enter the elements of first array in sorted order" << endl;
    for (int i = 0; i < size1; i++)
    {
        int element;
        cin >> element;
        arr1.push_back(element);
    }
    // cout << "Enter the size of the second array: - ";
    cin >> size2;
    // cout << "Enter the elements of Second array in sorted order" << endl;
    for (int i = 0; i < size1; i++)
    {
        int element;
        cin >> element;
        arr2.push_back(element);
    }
    int median;
    if(size1 < size2){
        median = getMedian(arr1, arr2);
    }
    else{
        median = getMedian(arr2, arr1);
    }

    cout<<"The median of both the arrays is: "<< median;
}