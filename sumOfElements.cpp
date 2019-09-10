#include<iostream>
#include<vector>
using namespace std;

int main(){
    int sum=0;
    vector<int>v{20,7,5,5,5,5,6,7,7};
    for(int x=0;x<v.size();x++){
        sum += v[x];
    }
    cout<<sum;
}