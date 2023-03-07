// Design three classes STUDENT, EXAM, and RESULT. The STUDENT class has data members
// such as roll no, name. Create a class EXAM by inheriting the STUDENT class. The EXAM class adds
// data members representing the marks scored in six subjects. Derive the RESULT from the EXAM class
// and has its own data members such as total marks. WAP to model this relationship.(Multilevel
// Inheritance)

#include<bits/stdc++.h>

using namespace std;

class Student{
    private:
        int roll_number;
        string name;
    public:
        Student(int roll_number, string name){
            this->roll_number = roll_number;
            this->name = name;
        }
        void display(){
            cout<<"Name :- "<<this->name<<endl;
            cout<<"Roll No :- "<<this->roll_number<<endl;
        }
};


class Exam:private Student{
    private:
        vector<pair<string,float>> marks;
    public:
        Exam(int roll_number, string name, vector<pair<string,float>> marks)
        : Student(roll_number, name){
            this->marks = marks;
        }
        void display(){
            Student::display();
            cout<<"Subjects: - Marks"<<endl;
            for(auto i: marks){
                cout<<i.first<<": - "<<i.second<<endl;
            }
        }
};


class Result:private Exam{
    private:
        float total_marks = 0;
    public:
        Result(int roll_number, string name, vector<pair<string,float>> marks)
        : Exam(roll_number, name, marks){
            get_total_marks(marks);
        }
        void get_total_marks(vector<pair<string,float>> marks){
            for(auto i: marks){
                total_marks += i.second;
            }
        }
        void display(){
            Exam::display();
            cout<<"Total Marks: - "<<total_marks;
        }
};

int main(){
    string name;
    int rollno;
    cout<<"Enter Name: - ";
    cin>>name;
    cout<<"Enter Rollno: - ";
    cin>>rollno;
     vector<pair<string,float>> all_marks;

    vector<string> subjects = {"Discrete Maths", "Computational Methods", "Data Structures", "DLCD", "Indian Knowlwdge System", "Object oriented Programing"};
    for(int i = 0; i < subjects.size(); i++){
        float marks;
        pair<string,int> subject_marks;
        cout<<"Enter Marks in "<<subjects[i]<<": - ";
        cin>>marks;
        subject_marks.first = subjects[i];
        subject_marks.second = marks;
        all_marks.push_back(subject_marks);
    }

    Result result(rollno, name, all_marks);
    result.display();
}