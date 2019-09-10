#include<iostream>
using namespace std;
int fact(int g){
if(g==0){
return 1;
}
else{
return g*fact(g-1);
}
}

int main(){
int N;
cin>>N;
cout<<"Factorial Of "<<N<<" is : "<<fact(N);

return 0;
}
