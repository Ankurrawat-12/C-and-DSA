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

    // ! No particular ordering

    for(auto it = map.begin(); it != map.end(); it++){
        cout<<it->first<<" "<<it->second<<endl;
    }
    
    if(map.count("Saurabh") > 0){
        cout<<"found "<<endl;
    }
    else{
        cout<<"Not Found!"<<endl;
    }
    cout<<map.size()<<endl;
    map.erase("Singh");
    cout<<map.size()<<endl;
    map.erase(map.begin());
    cout<<map.size()<<endl;
    // * time complexity O(1)

    return 0;
}