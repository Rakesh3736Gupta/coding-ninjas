#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0){

      return 1;    
    }
    

    return n*fun(n-1);
}
int main(){
    int n=5;
    
    fun(5);
    cout<<fun(5);

    return 0;
}