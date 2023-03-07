#include <bits/stdc++.h>

using namespace std;

class String{
    public:
        string sentence1;
        string sentence2;
        String(string sentence1, string sentence2){
            this->sentence1 = sentence1;
            this->sentence2 = sentence2;
        }
       
        void operator + (String);
        void operator = (String);
        void operator <= (String);
        void toLower();
        void toUpper();
        void size();
       
        void display(){
            cout<<"sentence1: - "<<this->sentence1<<" sentence2: - "<<this->sentence2<<endl;
        }
};

void String::operator + (String s){
   
    this->sentence1 = this->sentence1 + s.sentence1;
    this->sentence2 = this->sentence2 + s.sentence2;
    this->display();
}

void String::operator = (String s){
    this->sentence1 = s.sentence1;
    this->sentence2 = s.sentence2;
    this->display();
}

void String::operator <= (String s){
    if(this->sentence1 == s.sentence1){
        cout<<this->sentence1<<" == "<<s.sentence1<<endl;
    }
    else{
        cout<<this->sentence1<<" != "<<s.sentence1<<endl;
    }
    if(this->sentence2 == s.sentence2){
        cout<<this->sentence2<<" == "<<s.sentence2<<endl;
    }
    else{
        cout<<this->sentence2<<" != "<<s.sentence2<<endl;
    }
}

void  String::toUpper(){
    transform(this->sentence1.begin(), this->sentence1.end(),
    this->sentence1.begin(), ::toupper);
    // this->sentence1 = toupper(this->sentence1);
    transform(this->sentence2.begin(), this->sentence2.end(),
    this->sentence2.begin(), ::toupper);
    // this->sentence2 = toupper(this->sentence2);
    this->display();
}

void  String::toLower(){
    transform(this->sentence1.begin(), this->sentence1.end(),
    this->sentence1.begin(), ::tolower);
    // this->sentence1 = tolower(this->sentence1);
    transform(this->sentence2.begin(), this->sentence2.end(),
    this->sentence2.begin(), ::tolower);
    // this->sentence2 = tolower(this->sentence2);
    this->display();
}

void String::size()
{
    cout<<"length of "<<this->sentence1<<" == "<<this->sentence1.length()<<endl;
    cout<<"length of "<<this->sentence2<<" == "<<this->sentence2.length()<<endl;
}
int main() {
    String a("Good", "Bad"), b("Boy", "Girl"), c("Men", "Women");
    a + b;
    a <= b;
    a = b;
    a <= b;
    a = c;
    a <= b;
    b <= c;
    a.toLower();
    b.toUpper();
    c <= a;
    b + c;
    a.size();
    b.size();
    a.toUpper();
    b.toLower();
}