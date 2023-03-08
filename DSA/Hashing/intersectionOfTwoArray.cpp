#include<iostream>
#include<unordered_map>
#include<unordered_set>

using namespace std;

int main(){
    int m, n;
    cin>>m>>n;

    int array_m[m];
    int array_n[n];

    for (int i = 0; i < m; i++)
    {
        cin>>array_m[i];
    }

    for(int i = 0; i < n; i++){
        cin>>array_n[i];
    }

    // * unordered_set<int> set(array_m, array_m + m);
    unordered_set<int> set;
    for(int i = 0; i < m; i++){
        set.insert(array_m[i]);
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        auto it = set.find(array_n[i]);
        if(it != set.end()){
            res++;
            set.erase(it);
        }
    }
    cout<<res;
}