#include<iostream>
using namespace std;

int main(){

    int n;

    cout<<"Enter size: ";
    cin>>n;

    int arr[n];

    cout<<"Enter elements:\n";

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int x;

    cout<<"Enter element to search: ";
    cin>>x;

    int count=0;

    for(int i=0;i<n;i++){

        if(arr[i]==x)
            count++;
    }

    cout<<x<<" occurs "<<count<<" times.";

    return 0;
}