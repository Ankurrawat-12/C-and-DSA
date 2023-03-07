#include<iostream>
#include<list>

using namespace std;

struct MyHash
{
    int BUCKET;
    list<pair<int, string> > *table;
    MyHash(int b){
        BUCKET = b;
        table = new list<pair<int, string> >[b];
    }

    void insert(int key, string value){
        int i = key % BUCKET;
        cout<<"Inserting :- " + to_string(key)<<endl;
        pair<int, string> data;
        data.first = key;
        data.second = value;
        table[i].push_back(data);
    };

    bool search(int key){
        int i = key % BUCKET;
        for(auto x: table[i]){
            if(x.first == key){
                cout<<to_string(key) + " Found, with value: - " + x.second<<endl;
                return true;
            }
        }
        cout<<to_string(key) + " Not Found"<<endl;
        return false;
    };
    
    void remove(int key, string value){
        int i = key % BUCKET;
        cout<<"Removing " + to_string(key)<<endl;
        pair<int, string> data;
        data.first = key;
        data.second = value;
        table[i].remove(data);
    };
};


int main(){
    MyHash newHash(7);
    newHash.insert(70, "Ankur");
    newHash.insert(71,"Chaitaniya");
    newHash.insert(56, "Hariom");
    newHash.insert(9, "Himanshu");
    newHash.insert(72, "kartik");
    newHash.search(9);
    newHash.remove(9, "Himanshu");
    newHash.search(9);
    newHash.search(71);
    newHash.search(12);

}