#include <bits/stdc++.h>
using namespace std;

class BasicInfo{
    protected:
    string name;
    int rollNo;
    string sex;
    public:
    void getData(string name,int roll,string sex){
        this->name = name;
        this->rollNo = roll;
        this->sex = sex;
    }
    void display1(){
        cout<<"Name: "<<name<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
        cout<<"Sex: "<<sex<<endl;
    }
};

class Physical_fit : public BasicInfo{
    float height;
    float weight;
    public:
    void getData(string name,int roll,string sex,float height,float weight)
    {
        BasicInfo::getData(name, roll, sex);
        this->height=height;
        this->weight = weight;
    }
    void display2(){
        cout<<"height: "<<height<<endl;
        cout<<"weight: "<<weight<<endl;
    }
}; 

int main()
{   
    Physical_fit ankur;
    ankur.getData("Ankur",12,"Male", 170, 65);
    ankur.display1();
    ankur.display2();
    return 0;
}
