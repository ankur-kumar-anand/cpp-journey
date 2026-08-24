//Pass by value: 

#include<iostream>
using namespace std;
void change(int x){     //This is change fn's x
    x=20;
}
int main(){
    int x=10;          //main fn's x gets printed i.e. 10
    change(x);
    cout<<x<<endl;
}