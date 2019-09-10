#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";

    }
    for(auto x: v){
        cout<<x<<" ";
    }
    return 0;
}