#include<bits/stdc++.h>
using namespace std;
int fun(int x)
{
    if (x==0 || x==1)
    
    
    
       return 1;
    
    
    return fun(x-1)*x;
    
}
int main(){
    int n;
    cin>>n;

   cout<<fun(n);

    return 0;
}