#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   int A=0 ,B=1;
    for(int i=0; i<n; i++){
    int  C=A+B;
    cout<<C<<endl;
    A=B;
    B=C;


    } 
    /*int sum;
    if(n==0)
    {
cout <<0;
    }
    else if(n==1){
        cout<<1;
    }
else{
  int a=(n-1);
  int b=(n-2);
  sum=a+b;
  cout<<sum<<endl;  
}*/
    
    
    return 0;
}