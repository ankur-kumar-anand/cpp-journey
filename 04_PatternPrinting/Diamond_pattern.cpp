//Barfi/diamond:
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    
    int nst=2*n-3, nsp=1;
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

/*Barfi/Diamond Method 2:

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int nsp=n-1, nst=1;
    for(int i=1;i<=2*n-1;i++){
        for(int j=1;j<=nsp;j++){
           cout<<"  ";
        }
        for(int j=1;j<=nst;j++){
           cout<<"* ";
        }
        if(i<n){
           nsp--;
           nst=nst+2;
        }
        else{
            nsp++;
            nst=nst-2;
        }
        cout<<endl;
    }
    
    
}*/