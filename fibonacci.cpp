#include<iostream>
using namespace std;

int main(){
    unsigned long N;
    cin>>N;
    unsigned long long arr[N];
    arr[0] = 1;
    cout<<"1\t2\t";

    arr[1] = 1;
    for(unsigned long i=2;i<N;i++){
        arr[i] =  arr[i-1] + arr[i-2];
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
    return 0;
}