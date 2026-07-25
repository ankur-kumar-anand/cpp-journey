//find the max of 3 numbers using built-in function.
#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter 3 numbers : "<<endl;
    cin>>x>>y>>z;
    
    cout<<max(x,max(y,z))<<" : is maximum !"<<endl;
}