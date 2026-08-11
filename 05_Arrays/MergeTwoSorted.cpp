//There are two sorted arrays a=[10,20,40,70,90,100] and b=[30,50,60,80]. 
//This is a program to merge the two arrays a[] and b[]
//expected output: [10,20,30,40,50,60,70,80,90,100]

#include<iostream>
using namespace std;
int main(){
    int a[]={10,20,40,70,90,100};
    int b[]={30,50,60,80};
    int m =sizeof(a)/4;
    int n =sizeof(b)/4;
    int c[m+n];
    int i=0,j=0,k=0;
    
    while(i<m && j<n){
        if (a[i]<b[j]){
            c[k]=a[i];
            i++;
            k++;
        }
        else{
            c[k]=b[j];
            j++;
            k++;
        }
    }
    while(j<n){
        c[k]=b[j];
        k++;
        j++;
    }
    while(i<m){
        c[k]=a[i];
        k++;
        i++;
    }
    for(int i=0;i<m+n;i++){
        cout<<c[i]<<" ";
    }
}