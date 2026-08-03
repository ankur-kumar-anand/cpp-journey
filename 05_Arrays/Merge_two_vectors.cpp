#include <iostream>
#include <vector>

using namespace std;

int main(){

    int n,m;

    cin>>n>>m;

    vector<int> first(n);
    vector<int> second(m);
    vector<int> merged;

    for(int i=0;i<n;i++)
        cin>>first[i];

    for(int i=0;i<m;i++)
        cin>>second[i];

    for(int i=0;i<n;i++)
        merged.push_back(first[i]);

    for(int i=0;i<m;i++)
        merged.push_back(second[i]);

    cout<<"Merged vector:\n";

    for(int x : merged)
        cout<<x<<" ";

    return 0;
}