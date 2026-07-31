//Print the maximum element in the array: (for all poistive numbers)
#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,8,1,9,2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maxElement=arr[0];
    for(int i=0;i<size;i++){
        if(maxElement<arr[i]){
            maxElement=arr[i];
        }
    }
    cout<<"Maximum element : "<<maxElement<<endl;
}

/*Print the maximum element in the array:(negative)
#include<iostream> //can use one line header "<bits/stdc++.h>"
#include<climits>  //to use INT_MIN i.e most negative possible integer
using namespace std;
int main(){
    int arr[]={-62,-35,-5,-1,-88,-34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max) max = arr[i];
    }
    cout<<max;
}*/

/*Print the maximum element in the array:(negative)
//method 2
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-62,-35,-5,-1,-88,-34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximumElement = arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>maximumElement) maximumElement=arr[i];
    }
    cout<<maximumElement;
    
}*/

/*same method different logic !!
#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[]={-62,-35,-5,-1,-88,-34};
    int size = sizeof(arr) / sizeof(arr[0]);
    int maximumElement = arr[0];
    for(int i=1;i<size;i++){
       maximumElement=max(maximumElement,arr[i]); //using built-in function max(x,y)
    }
    cout<<maximumElement;
    
}*/