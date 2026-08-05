// Reverse Array: Method-1 : using a while loop and temp variable.

#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& arr){
    for(int elem:arr){
        cout<<elem<<" ";
    }
}
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    int i=0,j=arr.size()-1;
    while(i<j){
        int temp = arr[i];   
        arr[i]=arr[j];
        arr[j]=temp;
        i++;
        j--;
    }
    print(arr);
}

/*Method-2: using a while loop and swap variable.

#include<bits/stdc++.h>
using namespace std;
void print(vector<int>& arr){
    for(int elem:arr){
        cout<<elem<<" ";
    }
}
int main(){
    vector<int> arr={10,20,30,40,50,60,70};
    int i=0,j=arr.size()-1;
    while(i<j){
       swap(arr[i],arr[j]);
        i++;
        j--;
    }
    print(arr);
}*/

//There is a method 3 to use the reverse function but it won't make sense to use it here as we are learning the logic of reversing an array.