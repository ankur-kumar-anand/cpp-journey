//Function overloading (case 2):

#include<iostream>
using namespace std;
void fun(char x){
    cout<<"Hi"<<endl;
}
void fun(int x){
    cout<<"Good Morning"<<endl;
}
void fun(double x){
    cout<<"How are you ?"<<endl;
}
int main(){
    fun(7.0);
}