#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int x,y;
	cin>>x>>y;
	if(x<0 && y<0){
		cout<<3;
	}
	else if(x>0 && y<0){
		cout<<4;
	}
	else if(x<0 && y>0){
		cout<<2;
	}
	else if(x>0 && y>0){
		cout<<1;
	}

	return 0;
}