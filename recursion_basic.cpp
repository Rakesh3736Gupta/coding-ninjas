#include<bits/stdc++.h>
using namespace std;
int f(int n){
    cout<<n<<endl;
    if(n==0){
        return 0;
    }
    
    
        return 2*f(n-1)+n*n;
        cout<<f(n-1)<<endl;
    }

int main(){
    int n;
    cin>>n;
   int print= f(n);
    cout<<print<<endl;
    return 0;
}