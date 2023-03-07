#include<algorithm>
#include<iostream>

using namespace std;

struct Student
{
    string name;
    int marks;
};

bool Compare(Student s1, Student s2){
    if(s1.marks == s2.marks){
        return(s1.name < s2.name);
    }
    return (s1.marks > s2.marks);
}

int main(){
    Student students [] = {
        {"Ankur", 100},
        {"Chataniya", 98},
        {"Hariom", 98},
        {"Pratishta", 100},
        {"Akash", 90},
        {"Udbhav", 97}
    };
    // Stable: -  Bubble sort, insertion sort, merge sort
    // Unstable: - Selection sort, quick sort, heap sort
    int n = 6;
    sort(students, students+n, Compare);

    for(auto i: students){
        cout<<i.name<<" "<<i.marks<<endl;
    }
}