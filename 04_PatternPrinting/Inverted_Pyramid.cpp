//inverted pyramid:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int nst=2*n-1, nsp=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=nsp;j++){
           cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
           cout<<"* ";
        }
        nsp++;
        nst=nst-2;
        cout<<endl;
    }
}