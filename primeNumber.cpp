#include<iostream>
#include<stdlib.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    if(N==1){
        cout<<"1 is not prime number nor composite number";
        exit(0);
    }
    else{
        for(int i=2;i<=N/2;i++){
            if(N%i==0){
                cout<<"Not Prime";
                exit(0);
            }
        }
    }
    cout<<N<<" is a prime number\n";
}