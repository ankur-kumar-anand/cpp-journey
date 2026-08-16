//Q.Multiply even numbers of an array by 2 and square the odd numbers
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    for(int i=0;i<v.size();i++){ 
        if(v[i]%2==0) v[i]*=2;
        else v[i]*=v[i];
    }
     for(int elem:v){     //for_each loop
        cout<<elem<<" "; //straight forward traversal
    }
}