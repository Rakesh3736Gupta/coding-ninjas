#include<bits/stdc++.h>
using namespace std;
void fun(int n){
    if(n==0)
    return 1;
    fun(n-1);
    cout<<n<<endl;
    fun(n-1);
    cout<<"functoin"<<endl;
    fun(n-1);
    cout<<"hi"<<endl;
}
int main(){
    int n;
    cin>>n;
    fun(n);
    return 0;
}