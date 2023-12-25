#include <bits/stdc++.h>


using namespace std;

int main()
{
int n,f,i,j;


cin>>n;
int dd;

for(int t=0;t<n;t++){
  string s;
  cin>>s;
  f=0;
  dd=sqrt(s.size() );
  char a[dd][dd];
  for(i=0;i<dd;i++){
    for(int j=0;j<dd;j++){
      a[i][j]=s[f];
      f++;
    }
  }
  for(j=dd-1;j>=0;j--){
      for(i=0;i<dd; i++){
        cout<<a[i][j];
    }
  }
  cout<<endl;
  
}  

}