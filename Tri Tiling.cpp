#include <bits/stdc++.h>
using namespace std;
 
int fun(int n)
{
    int A[n + 1], B[n + 1];
    
    A[0] = 1, A[1] = 0, B[0] = 0, B[1] = 1;
    for (int i = 2; i <= n; i++) {
        A[i] = A[i - 2] + 2 * B[i - 1];
        B[i] = A[i - 1] + B[i - 2];
    }
    
    return A[n];
}
 
int main()
{
    int n;
    
    while(1){
      cin>>n;
      if (n==-1){
    
      break;}
  else{
  
    cout << fun(n) <<endl;}
}
    return 0;
}