//Optimised Bubble sort : TC-O(n)
#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>& arr){
    for(int elem:arr){
        cout<<elem<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr={5,4,3,6,2,1};
    int n = arr.size();
    print(arr);
    //int totalSwaps=0;
    for(int i=0;i<=n-1;i++){ //n-1
        int swaps=0;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
               swaps++;
               //totalSwaps++;
            }
        }
        if(swaps==0) break;
    }
    print(arr);
    //cout<<"The total number of swaps: "<<totalSwaps<<endl;
}