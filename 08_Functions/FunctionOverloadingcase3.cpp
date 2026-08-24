//Function overloading (case 3)
#include<iostream>
using namespace std;

void fun(int x, char y){
    cout<<"popatlal"<<endl;
}
void fun(char y, int x){
    cout<<"DHRUV"<<endl;
}
int main(){
    fun(97,'A');        //error if put another number in fun()
}