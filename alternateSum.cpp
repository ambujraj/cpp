#include<iostream>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++){
        cin>>arr[i];
    }
    int sumEven = 0;
    for(int i=0;i<N;i+=2){
        sumEven+=arr[i];
    }
    int sumOdd = 0;
    for(int i=1;i<N;i+=2){
        sumOdd+=arr[i];
    }
    cout<<"Sum Of Even Indexed: "<<sumEven<<endl;
    cout<<"Sum Of Odd Indexed: "<<sumOdd<<endl;

    return 0;

}