//odd right angled triangle: (method 1)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=(2*i)-1;j++){  //2*i-1 formula
         cout<<"* ";
        }
        cout<<endl;
    }

}

/*odd right angled triangle: (method 2)
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=a;j++){
            cout<<"* ";
        }
        a=a+2;
        cout<<endl;
    }
}*/