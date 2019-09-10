#include<iostream>
#include<vector>
using namespace std;

int main(){
int N;
cin>>N;
vector<int> v;
if(N==0 || N==1){
v.push_back(1);}
else{
int x=1;
while(N>1){
x *= N;
N--;
}
v.push_back(x);
cout<<v[0];
}


return 0;
}
