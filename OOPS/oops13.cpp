#include <bits/stdc++.h>
using namespace std;

class first{
    int bookNo;
    string bookName;

    public:
    void getData(){
        cout<<"Enter Name of book ";
        cin>>bookName;
        cout<<"enter book no. ";
        cin>>bookNo;
    }
    void putData(){
        cout<<"Book Number is "<<bookNo<<endl;
        cout<<"Book Name is "<<bookName<<endl;
    }
};

class second{
    string author;
    string publisher;
    
    public:
    void getData(){
        cout<<"Enter Name of Author ";
        cin>>author;
        cout<<"enter the name of publisher ";
        cin>>publisher;
    }
    void showData(){
        cout<<"Author is "<<author<<endl;
        cout<<"publisher is "<<publisher<<endl;
    }
};

class third : private first , private second {
    int noOfPages;
    int yearOfPublication;
    public:
    void getData(){
        first :: getData();
        second :: getData();
        cout<<"Enter the number of pages ";
        cin>>noOfPages;
        cout<<"Enter the year of publication ";
        cin>>yearOfPublication;
    }
    void display(){
        putData();
        showData();
        cout<<"Number of pages "<<noOfPages<<endl;
        cout<<"Year of publication "<<yearOfPublication<<endl;
    }
};

int main()
{   
    int size;
    cout<<"Enter the No of Books ";
    cin>>size;
    third books_shelf[size];
    for(int i=0;i<size;i++){
        books_shelf->getData();
        books_shelf->display();
    }

    return 0;
}
