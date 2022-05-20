#include<bits/stdc++.h>
using namespace std;

int main(){
    int ans=0;
    int i=0;

    int n;
    cin>>n;
    
    while(n!=0)
    { 

  int   bit=n&1;
  ans =(bit*pow(10,i))+ans;
    n=n>>1;
    i++;
    }
    
    cout<<ans;
    return 0;
}