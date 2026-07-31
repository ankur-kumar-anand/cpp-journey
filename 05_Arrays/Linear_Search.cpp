//search in Array: (Linear Search)
//You are given array & an integer,find out if this integer is present in the array! :

#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={62,-35,5,-1,88,-34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target =5;
    bool flag = false; //false means not present
    for(int i=0;i<size;i++){
        if(arr[i]==target) {
            flag=true; //true means present
            break;
        }
    }
    if(flag==true) cout<<"element found !"<<endl;
    else cout<<"Element Not Found !"<<endl;
}