//Write a function that counts and returns the number of digits in a given integer.

//Write a function countDigits(int n) that takes an integer as input and returns the total number of digits in it. Print the returned value in the main() function.
#include<iostream>
using namespace std;
int countDigits(int n){
    int count = (n==0) ? 1 : 0;
    while(n!=0){
        count++;
        n=n/10;
    }
    return count;
} 
int main(){
    int n;
    cin>>n;
    cout<<countDigits(n);

}