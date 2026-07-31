//Printing product of elements of the array:

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr) / sizeof(arr[0]); 
    int prod=1;
    for(int i=0;i<size;i++){
        prod=prod*arr[i];
    }
    cout<<prod;
}