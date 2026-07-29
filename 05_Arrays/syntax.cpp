//Syntax and Initialisation:

 #include<iostream>
 using namespace std;
 int main(){
    int marks[]={74,96,91,57,62,35};
    
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    cout<<marks[5]<<endl;
    
    //modifying the array:
    
    marks[2]=23;
    cout<<"updated 1st : "<<marks[2]<<endl;
    
    marks[2]=100;
    cout<<"updated 2nd: "<<marks[2]<<endl;
    
 }