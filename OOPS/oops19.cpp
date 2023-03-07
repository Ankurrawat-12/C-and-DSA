#include<bits/stdc++.h>

using namespace std;

class Time{
    int hours;
    int minutes;
    int seconds;
    public:
        Time(){};
        Time(int, int, int);
        Time operator +(Time);
        void display();
};

Time::Time(int hours, int minutes, int seconds){
    this->hours = hours;
    this->minutes = minutes;
    this->seconds = seconds;
}

Time Time::operator +(Time t){
    Time temp;
    if(this->seconds + t.seconds > 60){
        temp.seconds = (this->seconds + t.seconds)%60;
        this->minutes += (this->seconds + t.seconds)/60;
    }
    else{
        temp.seconds = this->seconds + t.seconds;
    }
    if(this->minutes + t.minutes > 60){
        temp.minutes = (this->minutes + t.minutes)%60;
        this->hours += (this->minutes + t.minutes)/60;
    }
    else{
        temp.minutes = this->minutes + t.minutes;
    }
    temp.hours = this->hours + t.hours;
    return temp;
}

void Time::display(){
    cout<<this->hours<<" : "<<this->minutes<<" : "<<this->seconds<<endl;
}

int main() {
    Time t1, t2, t3;
    int hour,minute,second;
    int hour1,minute1,second1;
    cout<<"Enter First Time: -"<<endl;
    cout<<"Enter Hour(0-24): - ";
    cin>>hour;
    cout<<"Enter Minutes(0-60): - ";
    cin>>minute;
    cout<<"Enter Seconds(0-60): - ";
    cin>>second;
    cout<<"Enter Second Time: -"<<endl;
    cout<<"Enter Hour(0-24): - ";
    cin>>hour1;
    cout<<"Enter Minutes(0-60): - ";
    cin>>minute1;
    cout<<"Enter Seconds(0-60): - ";
    cin>>second1;
    t1 = Time(hour,minute,second);
    t2 = Time(hour1,minute1,second1);
    t3 = t1+t2;
    t1.display();
    t2.display();
    cout<<"Sum of both times: - "<<endl;
    t3.display();
}