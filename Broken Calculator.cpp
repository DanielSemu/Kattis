#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long int start=1,t,num1,num2,result;
  char op;
  cin>>t;
  
  for(int i=0; i<t; i++ )
  {
  cin>>num1>>op>>num2;
  switch(op)
  {
  case '*':
  result=pow((num1*num2),2);
  cout<<result<<endl;
  start=result;
  break;
  
  case '+':
  result=(num1+num2)-start;
  cout<<result<<endl;
  start=result;
  break;
    
    case '-':
  result=start*(num1-num2);
  cout<<result<<endl;
  start=result;
  break;
  
  case '/':
  if(num1%2==0)
  {
    result=num1/2;
    cout<<result<<endl;
    start=result;
    }  
  else
    {
    result=(num1+1)/2;
    cout<<result<<endl;
    start=result;
    }
  }  
  }
  
  
  return 0;
}