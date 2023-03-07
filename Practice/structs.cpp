#include<iostream>

using namespace std;

typedef struct employee
{
    int id;
    char fav_character;
    float salary;
} ep;

int main()
{
    struct employee ankur;
    ankur.id = 012;
    ankur.fav_character = 'X';
    ankur.salary = 2400000000;
    cout<<ankur.fav_character<<endl;

    ep shubham;
    shubham.id = 213;
    shubham.fav_character = 'E';
    shubham.salary = 2000000;
    cout<<shubham.fav_character<<endl;
}
