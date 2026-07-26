//Dereference operator:
#include<iostream>
using namespace std;
int main(){
    /*int x=7;
    int* ptr=&x;
    *ptr += 8;        //x=x+8
    cout<<x<<endl;*/

    int x=139;
    int* p=&x;
    cout<<x<<endl;
    *p=10;         //x=10 now
    cout<<x;
  
}