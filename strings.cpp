#include<iostream>
using namespace std;

int main(){
    string a;
    cin>>a;
    string b = "rthr";
    for(int i=0;i<=a.size();i++){
         cout<<a[i]<<"\t";
    }
    if(b==a){
        cout<<"Equal";
    }
    else{
        cout<<endl<<"Not Equal"<<endl;
    }
    

}