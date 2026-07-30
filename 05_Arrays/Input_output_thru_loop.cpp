//Input_output using loop:
 
 /*#include<iostream>
 using namespace std;
 int main(){
    int arr[]={74,96,91,57,62,35,45,12,98,37};
    
    for(int i=0;i<=7;i++){
        cout<<arr[i]<<" ";
    }
}*/

 #include<iostream>
 using namespace std;
 int main(){
    int arr[]={74,96,91,57,62,35,45,12,98,37};
    int n = sizeof(arr)/4;
    
    for(int i=0;i<=n-1;i++){  //0 to n-1
        cout<<arr[i]<<" ";
    }
}
 