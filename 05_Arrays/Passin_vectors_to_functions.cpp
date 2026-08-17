//passing vector to functions:

#include<bits/stdc++.h>
using namespace std;

//void change(vector<int> v){  //pass by value = "make a copy"
//    v[2]=99;
//}

void change(vector<int>& v){  //pass by reference = "give acess to original"
   v[2]=99;
}


int main(){
    vector<int> v={4,3,8,2,9,7};
    change(v);
    cout<<v[2]<<endl;
}