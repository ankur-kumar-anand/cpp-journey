//Built-in vector functionalities:

/*#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    
    sort(v.begin(),v.end());   //can also use reverse fun()
    for(int elem:v){
        cout<<elem<<" \n";
    }
}*/


#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v={4,3,8,2,9};
    
    sort(v.begin(),v.end());          //sorting
    for(int elem:v) cout<<elem<<" ";
    
    cout<<" "<<endl;
    
    reverse(v.begin(),v.end());       //reversing
    for(int elem:v) cout<<elem<<" ";
    
}    
