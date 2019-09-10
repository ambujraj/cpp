#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(20);
    v.push_back(39);
    v.push_back(10);
    v.push_back(40);
    v.push_back(39);

    int max = v[0];
    for(int i=1;i<v.size();i++){
        if(v[i]>max){
            max = v[i];
        }
    }
    cout<<max<<endl;
    return 0;
}