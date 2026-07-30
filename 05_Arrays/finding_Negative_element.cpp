//Finding negative elements in an array:

#include<iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter array size: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Array Elements: ";
    //Input through loop
    for(int i=0;i<=n-1;i++){
        cin>>arr[i];
    }
    // print the negative elements of Array
    for(int i=0;i<=n-1;i++){
        if(arr[i]<0) cout<<arr[i]<<" :is negative element ! "<<endl;
    }
    
 }