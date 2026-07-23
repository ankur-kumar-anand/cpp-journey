//star traingle vertically flipped: (Method 1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)>n)cout<<"* ";
            else cout<<"  ";
        }
        cout<<endl;
    }
}

/*star triangle vertically flipped:( Method 2)

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
           cout<<"  "; 
        }
        for(int j=1;j<=i;j++){
           cout<<"* "; 
        }
        cout<<endl;
    }
    
}*/