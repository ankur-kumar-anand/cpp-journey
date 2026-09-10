//Bubble sort:
//TC- O(n^2)
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
    for(int i=0;i<=n-1;i++){ //n-1
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
            }
        }
    }
    print(arr);
}