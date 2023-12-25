#include<iostream>
using namespace std;
int main(){
    int x,sum=0,y;
    cin>>x;
    for(int i=0; i<x; i++){
        cin>>y;
        sum+=y;
    }
    cout<<sum;
    
    return 0;
}