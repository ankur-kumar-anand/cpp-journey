//Q.Multiply even numbers of an array by 2 and square the odd numbers

/*#include<iostream>
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
}*/

//if we are using for_each loop: the output won't change unless -
// By adding '&' to elem will use reference to modify it and hence now, it will work.

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    for(int &elem:v){  //adding & to elem
        if(elem%2==0) elem=elem*2;
        else elem=elem*elem;
    }
    for(int &elem:v) cout<<elem<<" ";  //adding & to elem
}