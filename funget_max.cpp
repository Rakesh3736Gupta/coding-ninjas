#include<bits/stdc++.h>
using namespace std;
int getmax(int x , int y){
    if(x>y)
    return x;
    else
    return y;
}
int main(){
    int x ,y;
    cin>>x>>y;
    cout<<getmax(x ,y);
    return 0;
}