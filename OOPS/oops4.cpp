#include <bits/stdc++.h>

using namespace std;

class Student{
    public:
        string name;
        string branch;
        int rollno;
        int age;
        string sex;
        vector<float> subjects;
        Student(){};
        Student(string, string, int, int, string, vector<float>);
        float percentage();
};

vector<Student> allStudents;

Student::Student(string name, string branch, int rollno, int age, string sex, vector<float> subjects){
    this->name = name;
    this->branch = branch;
    this->rollno = rollno;
    this->age = age;
    this->sex = sex;
    this->subjects = subjects;
    // allStudents.push_back(this);
}

float Student::percentage(){
    float totalMarks = 0;
    for(auto i : this->subjects){
        totalMarks += i;
    }
    return (totalMarks/500)*100;
}


int main() {
   
    Student s1, s2, s3, s4, s5, s6, s7, s8, s9;
   
    s1 = Student("Ankur", "CSE", 12, 18, "Male", {92.2, 97.6, 95.3, 84, 76.9});
    s2 = Student("Chetan", "CSE", 13, 19, "Male", {82.3, 87.6, 85.3, 76, 66.9});
    s3 = Student("Hariom", "CSE", 5, 20, "Male", {72.2, 77.6, 75.3, 77, 66.9});
    s4 = Student("Himanshu", "IT", 69, 19, "Male", {62.9, 87.6, 65.3, 62, 56.9});
    s5 = Student("Anshu", "CST", 56, 20, "Male", {52.3, 97.6, 55.3, 85, 72.9});
    s6 = Student("Adatiya", "IT", 96, 20, "Male", {42.5, 87.6, 75.3, 74, 75.2});
    s7 = Student("Sana", "EEE", 126, 21, "Female", {51.2, 71.6, 82.3, 72, 71.5});
    s8 = Student("Chesta", "CST", 1486, 20, "Female", {42.7, 75.6, 76.5, 74, 66.9});
    s9 = Student("Niharika", "CSE", 21, 21, "Female", {82.7, 85.6, 83, 77, 86.9});
   
    allStudents.push_back(s1);
    allStudents.push_back(s2);
    allStudents.push_back(s3);
    allStudents.push_back(s4);
    allStudents.push_back(s5);
    allStudents.push_back(s6);
    allStudents.push_back(s7);
    allStudents.push_back(s8);
    allStudents.push_back(s9);
   
    for(auto i: allStudents){
        if(i.percentage() > 70){
            cout<<i.name<<" percentage: - "<<i.percentage()<<endl;
        }
    }
}