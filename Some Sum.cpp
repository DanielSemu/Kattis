#include<bits/stdc++.h>
using namespace std;
int main(){
int x;
cin>>x;
if(x==2  || x== 6  ||x== 10)
cout<<"Odd"<<endl;
else if( x== 4 ||  x==8)
cout<<"Even"<<endl;
else if(x==1 || x==3 || x==5 || x== 7 || x== 9)
cout<<"Either"<<endl;
    return 0;
}