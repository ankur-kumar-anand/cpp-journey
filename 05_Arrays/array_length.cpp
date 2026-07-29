//length of an array:

 #include<iostream>
 using namespace std;
 int main(){
    int marks[]={74,96,91,57,62,35,45,12,98,37};
    cout<<sizeof(marks)/sizeof(int)<<endl; //method1
    cout<<sizeof(marks)/sizeof(marks[0])<<endl;  //method2
 } 