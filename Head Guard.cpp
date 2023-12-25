#include <bits/stdc++.h>


using namespace std;

int main()
{
  while(cin)
  {
  
string s;
cin>>s;
int count=0;
for(int i=0;i<s.size();i++){
  if (s[i]==s[i+1]){
    count++;
  }
  else{
    cout<<count+1<<s[i];
    count=0;
  }
}
cout<<endl;  
}
  
}