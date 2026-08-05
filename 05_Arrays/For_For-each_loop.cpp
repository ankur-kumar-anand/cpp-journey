//Printing vector elements in reverse order using for-each loop and for loop.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    
    for(int ele:v){                 //for-each loop
        cout<<ele<<" \n";
    }
    
    /*for(int i=v.size()-1; i>=0;i--){
        cout<<v[i]<<" ";
    }*/
}