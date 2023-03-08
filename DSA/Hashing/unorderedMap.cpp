#include<iostream>
#include<unordered_map>

using namespace std;

int main() {
    unordered_map<string, int> map;
    map["Ankur"] = 12;
    map["Rawat"] = 13;
    map.insert({"Singh", 14});

    auto iterator = map.find("Ankur");

    if (iterator != map.end())
    {
        cout<< "Ankur " << iterator->second<<endl;
    }
    else
    {
        cout << "Ankur not found" << endl;
    }

    return 0;
}
